#include <iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
	Diem(float a = 0, float b = 1) : x(a), y(b) {}
	bool operator>(Diem b)
	{
		if (y > b.y)
			return 1;
		if (y < b.y)
			return 0;
		if (x > b.x)
			return 1;
		return 0;
	}
};

void InterchangeSort(Diem[], int);
void Nhap(Diem[], int&);
void Xuat(Diem[], int);

int main()
{
	Diem a[100];
	int n;
	Nhap(a, n);

	cout << "\nMang ban dau: ";
	Xuat(a, n);

	InterchangeSort(a, n);
	cout << "\nMang sau sap xep: ";
	Xuat(a, n);

	return 0;
}

void Nhap(Diem a[], int& n)
{
	cout << "\nNhap n: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		a[i].y = rand() % (100 + 1);
		a[i].x = rand() % (100 + 1);
	}
}

void Xuat(Diem a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << a[i].y << "+" << a[i].x << "i  ";
}

void InterchangeSort(Diem a[], int n)
{
	for (int i = 0; i < n - 1; ++i)
		for (int j = i + 1; j < n; ++j)
			if (a[i] > a[j])
				swap(a[i], a[j]);
}