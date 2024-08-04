#include <iostream>
using namespace std;

void Nhap(float&, float&);
float KhoangCach(float, float, float, float);
float ChuVi(float, float, float, float, float, float);
void Xuat(float, float);

int main()
{
	float x1, y1;
	Nhap(x1, y1);
	float x2, y2;
	Nhap(x2, y2);
	float x3, y3;
	Nhap(x3, y3);

	cout << "Diem thu nhat: " << endl;
	Xuat(x1, y1);
	cout << "Diem thu hai: " << endl;
	Xuat(x2, y2);
	cout << "Diem thu ba: " << endl;
	Xuat(x3, y3);

	float p = ChuVi(x1, y1, x2, y2, x3, y3);
	cout << "Chu vi tam giac la: " << p << endl;
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

float ChuVi(float x1, float y1, float x2, float y2, float x3, float y3)
{
	float AB = KhoangCach(x1, y1, x2, y2);
	float AC = KhoangCach(x1, y1, x3, y3);
	float BC = KhoangCach(x2, y2, x3, y3);

	return AB + BC + AC;
}
