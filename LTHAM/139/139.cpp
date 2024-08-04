#include <iostream>
using namespace std;

void Nhap(float&);
void XuatGiaTri(float, float);

int main()
{
	float a;
	cout << "Nhap a: ";
	Nhap(a);

	float b;
	cout << "Nhap b: ";
	Nhap(b);

	XuatGiaTri(a, b);

	return 0;
}

void Nhap(float& a)
{
	cin >> a;
}

void XuatGiaTri(float a, float b)
{
	if (a == 0)
		if (b == 0)
			cout << "Vo so nghiem" << endl;
		else
			cout << "Vo nghiem" << endl;
	else
	{
		float x = -b / a;
		cout << x << endl;
	}
}