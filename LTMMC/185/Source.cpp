#include <iostream>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int ktCon(float[], int, int, int);
void DuongDaiNhat(float[], int, int&, int&);
void XuatDuongDaiNhat(float[], int);
void XuatCon(float[], int, int, int);

int main()
{
	float a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	cout << "\nMang con duong dai nhat: ";
	XuatDuongDaiNhat(a, n);

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

int ktCon(float a[], int n, int vt, int l)
{
	int flag = 1;
	for (int i = 0; i <= l - 1; i++)
		if (a[vt + i] <= 0)
			flag = 0;
	return flag;
}

void DuongDaiNhat(float a[], int n, int& vtd, int& vtc)
{
	for (int l = n; l >= 1; l--)
		for (int vt = 0; vt <= n - l; vt++)
			if (ktCon(a, n, vt, l) == 1)
			{
				vtd = vt;
				vtc = vt + l - 1;
				return;
			}
	vtd = vtc = -1;
}

void XuatCon(float a[], int n, int vtd, int vtc)
{
	for (int i = vtd; i <= vtc; ++i)
		cout << a[i] << " ";
}

void XuatDuongDaiNhat(float a[], int n)
{
	int vtd = -1;
	int vtc = -1;
	DuongDaiNhat(a, n, vtd, vtc);
	if (vtd == -1)
		cout << "\nMang toan am";
	else
		XuatCon(a, n, vtd, vtc);
}