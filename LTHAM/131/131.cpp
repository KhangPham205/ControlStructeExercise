#include <iostream>
using namespace std;

void Nhap(float&, float&);
int KiemTra(float, float, float, float, float, float);
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

	
	if (KiemTra(x1, y1, x2, y2, x3, y3) == 1)
		cout << "La tam giac" << endl;
	else
		cout << "Khong la tam giac" << endl;
	return 0;
}

void Nhap(float& x, float& y)
{
	cout << "Nhap hoanh do: ";
	cin >> x;
	cout << "Nhap tung do: ";
	cin >> y;
}

int KiemTra(float x1, float y1, float x2, float y2, float x3, float y3)
{
	float a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	float b = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	float c = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	if (a + b > c && a + c > b && b + c > a)
		return 1;
	return 0;
}

void Xuat(float x, float y)
{
	cout << "Hoanh do: " << x << endl;
	cout << "Tung do: " << y << endl;
}