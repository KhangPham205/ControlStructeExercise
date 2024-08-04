#include <iostream>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TongCon(float[], int, int, int);
void ConLonNhat(float[], int, int&, int&);
void InMangLonNhat(float[], int);
void XuatCon(float[], int, int, int);

int main()
{
	float a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	cout << "\nMang con co tong lon nhat: ";
	InMangLonNhat(a, n);

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

void ConLonNhat(float a[], int n, int& vtd, int& vtc)
{
	vtd = vtc = 0;
	float sln = a[0];
	for (int l = 1; l <= n; l++)
		for (int vt = 0; vt <= n - l; vt++)
			if (TongCon(a, n, vt, l) > sln)
			{
				vtd = vt;
				vtc = vt + l - 1;
				sln = TongCon(a, n, vt, l);
			}
}

void XuatCon(float a[], int n, int vtd, int vtc)
{
	for (int i = vtd; i <= vtc; ++i)
		cout << a[i] << " ";
}

void InMangLonNhat(float a[], int n)
{
	int vtd = -1;
	int vtc = -1;
	ConLonNhat(a, n, vtd, vtc);
	if (vtd == -1)
		cout << "\nMang toan so am";
	else
		XuatCon(a, n, vtd, vtc);
}