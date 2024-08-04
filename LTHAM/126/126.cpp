#include <iostream>
using namespace std;

void Nhap(int&);
int GiaTriLonNhat(int, int);
void Xuat(int);

int main()
{
	int a;
	cout << "Nhap a: ";
	Nhap(a);

	int b;
	cout << "Nhap b: ";
	Nhap(b);

	cout << "Gia tri cua a: ";
	Xuat(a);
	cout << "Gia tri cua b: ";
	Xuat(b);

	cout << "Gia tri lon nhat: " << GiaTriLonNhat(a, b) << endl;
	return 0;
}

void Nhap(int& x)
{
	cin >> x;
}

int GiaTriLonNhat(int a, int b)
{
	int lc = a;
	if (lc < b)
		lc = b;
	return lc;
}

void Xuat(int x)
{
	cout << x << endl;
}


