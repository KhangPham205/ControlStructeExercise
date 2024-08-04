#include <iostream>
using namespace std;

void Nhap(int&);
void XuLy(int&, int&);
void Xuat(int);

int main()
{
	int a;
	cout << "Nhap a: ";
	Nhap(a);

	int b;
	cout << "Nhap b: ";
	Nhap(b);

	int c;
	cout << "Nhap c: ";
	Nhap(c);

	cout << "Chinh thu tu cua a va b" << endl;
	XuLy(a, b);
	cout << "Chinh thu tu cua a va c" << endl;
	XuLy(a, c);
	cout << "Chinh thu tu cua b va c" << endl;
	XuLy(b, c);

	cout << "Gia tri cua a: ";
	Xuat(a);
	cout << "Gia tri cua b: ";
	Xuat(b);
	cout << "Gia tri cua c: ";
	Xuat(c);
	return 0;
}

void Nhap(int& x)
{
	cin >> x;
}

void XuLy(int& a, int& b)
{
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
}

void Xuat(int x)
{
	cout << x << endl;
}