#include <iostream>
using namespace std;

void Nhap(int&);
void XuatNamNhuan(int, int);

int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;

	int y;
	cout << "Nhap y: ";
	cin >> y;

	cout << "Cac nam nhuan trong doan [" << x << ", " << y << "] :" << endl;
	XuatNamNhuan(x, y);
	return 0;
}

void Nhap(int& a)
{
	cin >> a;
}

void XuatNamNhuan(int x, int y)
{
	int n = x;

	while (n <= y)
	{
		bool dk1 = ((n % 4 == 0) && (n % 100 != 0));
		bool dk2 = (n % 400 == 0);
		if(dk1 || dk2)
		{
			cout << n << endl;
		}
		n++;
	}
}
