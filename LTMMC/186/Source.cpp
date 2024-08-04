#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int TongCon(int[], int, int, int);
void TimCon(int[], int, int, int&, int&);
void InMangCon(int[], int, int);
void XuatCon(float[], int, int, int);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);

	int M;
	cout << "\nNhap M: ";
	cin >> M;

	cout << "\nCac mang con thoa\n";
	InMangCon(a, n, M);

	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
		a[i] = rand() % (100 + 1);
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
}

int TongCon(int a[], int n, int vt, int l)
{
	int s = 0;
	for (int i = 0; i <= l - 1; i++)
		s = s + a[vt + i];
	return s;
}

void TimCon(int a[], int n, int M, int& vtd, int& vtc)
{
	for (int l = 1; l <= n; l++)
		for (int vt = 0; vt <= n - l; vt++)
			if (TongCon(a, n, vt, l) == M)
			{
				vtd = vt;
				vtc = vt + l - 1;
				return;
			}
	vtd = vtc = -1;
}

void XuatCon(int a[], int n, int vtd, int vtc)
{
	for (int i = vtd; i <= vtc; ++i)
		cout << a[i] << " ";
}

void InMangCon(int a[], int n, int M)
{
	int vtd = -1;
	int vtc = -1;
	TimCon(a, n, M, vtd, vtc);
	if (vtd == -1)
		cout << "\nKhong co mang con thoa";
	else
		XuatCon(a, n, vtd, vtc);
}