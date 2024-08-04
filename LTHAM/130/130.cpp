#include <iostream>
using namespace std;

void Nhap(float&);
int KiemTra(float, float, float);
void Xuat(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	Nhap(x);

	float y;
	cout << "Nhap y: ";
	Nhap(y);

	float z;
	cout << "Nhap z: ";
	Nhap(z);

	if (KiemTra(x, y, z))
		cout << "La tam giac" << endl;
	else
		cout << "Khong la tam giac" << endl;
	return 0;
}

void Nhap(float& x)
{
	cin >> x;
}

int KiemTra(float x, float y, float z)
{
	if (x + y > z && x + z > y && y + z > x)
		return 1;
	return 0;
}

void Xuat(float x)
{
	cout << x << endl;
}