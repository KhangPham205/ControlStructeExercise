#include <iostream>
using namespace std;

void Nhap(float&);
void KiemTra(float, float, float);
void Xuat(float);

int main()
{
	float x;
	cout << "Nhap so thu nhat: ";
	Nhap(x);
	float y;
	cout << "Nhap so thu hai: ";
	Nhap(y);
	float z;
	cout << "Nhap so thu ba: ";
	Nhap(z);

	cout << "So thu nhat: " << endl;
	Xuat(x);
	cout << "So thu hai: " << endl;
	Xuat(y);
	cout << "So thu ba: " << endl;
	Xuat(z);

	cout << "Kiem tra BDT: " << endl;
	KiemTra(x, y, z);
	return 0;
}

void Nhap(float& d)
{
	cin >> d;
}

void KiemTra(float x, float y, float z)
{
	if (x <= y && y <= z)
		cout << "BDT dung" << endl;
	else
		cout << "BDT sai" << endl;
}

void Xuat(float d)
{
	cout << d << endl;
}