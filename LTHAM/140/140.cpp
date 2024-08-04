#include <iostream>
using namespace std;

void Nhap(float&);
void XuatGiaTri(float, float, float);

int main()
{
	float a;
	cout << "Nhap a: ";
	Nhap(a);

	float b;
	cout << "Nhap b: ";
	Nhap(b);

	float c;
	cout << "Nhap c: ";
	Nhap(c);

	XuatGiaTri(a, b, c);
	return 0;
}

void Nhap(float& a)
{
	cin >> a;
}

void XuatGiaTri(float a, float b, float c)
{
	float delta = b * b - 4 * a * c;
	if (delta <= 0)
	{
		if (delta == 0)
		{
			float x0 = -b / (2 * a);
			cout << "x0 = " << x0 << endl;
		}
		else
		{
			cout << "Phuong trinh vo nghiem!!!!!" << endl;
		}
	}
	else
	{
		float x1 = (-b + sqrt(delta)) / (2 * a);
		float x2 = (-b - sqrt(delta)) / (2 * a);
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
}