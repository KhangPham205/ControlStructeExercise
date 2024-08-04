#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktToanLe(int);
void LietKe(int[], int);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	cout << "\nCac gia tri toan le trong mang: ";
	LietKe(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
		a[i] = 1 + rand() / (RAND_MAX / 100.0);
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << setw(10) << a[i];
}

bool ktToanLe(int n)
{
	int flag = true;
	int t = abs(n);
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = false;
		t = t / 10;
	}
	return flag;
}

void LietKe(int a[], int n)
{
	for (int i = 0; i <= n - 1; ++i)
		if (ktToanLe(a[i]))
			cout << setw(10) << a[i];
}

