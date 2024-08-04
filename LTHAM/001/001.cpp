#include<iostream>
#include<cmath>
using namespace std;

void Nhap(float&, float&); // hoanh do va tung do
float KhoangCach(float, float, float, float); // tinh khoang cach
void Xuat(float, float);// xuat hoanh do va tung do

int main()
{
	float x1, y1;
	Nhap(x1, y1);
	float x2, y2;
	Nhap(x2, y2);
	cout << "Diem thu nhat: " << endl;
	Xuat(x1, y1);
	cout << "Diem thu hai: " << endl;
	Xuat(x2, y2);
	float kq = KhoangCach(x1, y1, x2, y2);
	cout << "Khoang cach la: " << kq << endl;
	return 0;
}

void Nhap(float& xx, float& yy)
{
	cout << "Nhap hoanh do: " << endl;
	cin >> xx;
	cout << "Nhap tung do: " << endl;
	cin >> yy;
}

void Xuat(float xx, float yy)
{

	cout << "Hoanh do: " << xx << endl;
	cout << "Tung do: " << yy << endl;
}

float KhoangCach(float x1, float y1, float x2, float y2)
{
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}