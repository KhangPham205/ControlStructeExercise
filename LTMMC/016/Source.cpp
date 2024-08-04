#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void LietKe(int[], int, int, int);

int main()
{
	int a[100];
	int n;

	int x = 30;
	int y = 50;
	Nhap(a, n);
	cout << "\nCac gia tri trong mang thuoc doan (" << x << "," << y << "): ";
	LietKe(a, n, x, y);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
		a[i] = rand() % 100;
}

void LietKe(int a[], int n, int x, int y)
{
	for (int i = 0; i <= n - 1; ++i)
		if (a[i] >= x && a[i] <= y && a[i] % 2 == 0)
			cout << setw(5) << a[i] << " ";
}

