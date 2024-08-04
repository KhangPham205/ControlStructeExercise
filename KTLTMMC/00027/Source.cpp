#include <iostream>
using namespace std;

void Nhap(int[], int&);
int DemSoNguyenTo(int[], int);
bool ktNguyenTo(int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "So luong so nguyen to < 100: " << DemSoNguyenTo(a, n) << endl;
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + rand() / (RAND_MAX / (200.0));
}

int DemSoNguyenTo(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] < 100 && ktNguyenTo(a[i]))
			dem++;
	return dem;
}

bool ktNguyenTo(int nn)
{
	int dem = 0;
	for (int i = 1; i <= nn; i++)
		if (nn % i == 0)
			dem++;

	if (dem == 2)
		return true;
	return false;
}