#include <iostream>
using namespace std;

void Nhap(int&);
void XuLy(int&);
void Xuat(int);

int main()
{
	int a;
	cout << "Nhap a: ";
	Nhap(a);

	int b;
	cout << "Nhap b: ";
	Nhap(b);

	cout << "Lay tri tuyet doi: " << endl;
	XuLy(a);
	XuLy(b);

	cout << "a = "; 
	Xuat(a); 
	cout << " b = ";
	Xuat(b);
	return 0;
}

void Nhap(int& x)
{
	cin >> x;
}

void XuLy(int& x)
{
	if (x < 0)
		x = -x;
}

void Xuat(int x)
{
	cout << x << endl;
}

