#include <iostream>
using namespace std;

void Nhap(int&);
void Xuat(int);
void Hoanvi(int&, int&);

int main()
{
	int a;
	cout << "Nhap a: ";
	Nhap(a);

	int b;
	cout << "Nhap b: ";
	Nhap(b);

	
	Hoanvi(a, b);
	cout << "Gia tri cua a: " << endl;
	Xuat(a);
	cout << "Gia tri cua b: " << endl;
	Xuat(b);
	return 0;
}

void Nhap(int& x)
{
	cin >> x;
}

void Xuat(int x)
{
	cout << x << endl;
}

void Hoanvi(int& a, int& b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}