#include <iostream>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int ViTriDuongDau(float[], int);
float TongCon(float[], int, int, int);
int ktCon(float a[], int, int, int);
void DuongLonNhat(float[], int, int&, int&);
void InMangDuongLonNhat(float[], int);
void XuatCon(float[], int, int, int);

int main()
{
	float a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	cout << "\nMang con duong co tong lon nhat: ";
	InMangDuongLonNhat(a, n);

	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
}

float TongCon(float a[], int n, int vt, int l)
{
	int s = 0;
	for (int i = 0; i < l; i++)
		s = s + a[vt + i];
	return s;
}

int ktCon(float a[], int n, int vt, int l)
{
	for (int i = 0; i <= l - 1; i++)
		if (a[vt + i] <= 0)
			return 0;
	return 1;
}

int ViTriDuongDau(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			return i;
	return -1;
}

void DuongLonNhat(float a[], int n, int& vtd, int& vtc)
{
	int vt = ViTriDuongDau(a, n);
	if (vt == -1)
	{
		vtd = vtc = -1;
		return;
	}

	int smax = a[vt];
	vtd = vtc = vt;
	for (int l = 1; l <= n; l++)
		for (int vt = 0; vt <= n - l; vt++)
			if (ktCon(a, n, vt, l) == 1 && TongCon(a, n, vt, l) > smax)
			{
				vtd = vt;
				vtc = vt + l - 1;
				smax = TongCon(a, n, vt, l);
			}
}

void XuatCon(float a[], int n, int vtd, int vtc)
{
	for (int i = vtd; i <= vtc; ++i)
		cout << a[i] << " ";
}

void InMangDuongLonNhat(float a[], int n)
{
	int vtd = -1;
	int vtc = -1;
	DuongLonNhat(a, n, vtd, vtc);
	if (vtd == -1)
		cout << "\nMang toan so am";
	else
		XuatCon(a, n, vtd, vtc);
}