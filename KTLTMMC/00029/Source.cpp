#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool KiemTra(int[], int);

int main()
{
	int a[100];
	int k;
	Nhap(a, k);
	cout << "Mang ban dau: ";
	Xuat(a, k);
	cout << '\n';
	if (KiemTra(a, k))
		cout << "Ton tai" << endl;
	else
		cout << "Khong ton tai" << endl;
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
		a[i] = rand() % (3000 + 1);
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << a[i] << ' ';
}

bool KiemTra(int a[], int n)
{
	for (int i = 0; i < n; ++i)
		if (a[i] % 2 == 0 && a[i] < 2004)
			return true;
	return false;
}
