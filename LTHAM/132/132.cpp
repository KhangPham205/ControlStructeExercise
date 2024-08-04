#include <iostream>
using namespace std;

void Nhap(float&, float&);
int KiemTra(float, float, float, float, float, float, float, float);
void Xuat(float, float);

int main()
{
	float x1, y1;
	Nhap(x1, y1);
	float x2, y2;
	Nhap(x2, y2);
	float x3, y3;
	Nhap(x3, y3);
	float x0, y0;
	Nhap(x0, y0);

	cout << "Diem thu nhat: " << endl;
	Xuat(x1, y1);
	cout << "Diem thu hai: " << endl;
	Xuat(x2, y2);
	cout << "Diem thu ba: " << endl;
	Xuat(x3, y3);
	cout << "Diem can kiem tra: " << endl;
	Xuat(x0, y0);

	
	if (KiemTra(x1, y1, x2, y2, x3, y3, x0, y0) == 1)
		cout << "M trong ABC" << endl;
	else
		cout << "M ngoai ABC" << endl;
	return 0;
}

void Nhap(float& x, float& y)
{
	cout << "Nhap hoanh do: ";
	cin >> x;
	cout << "Nhap tung do: ";
	cin >> y;
}

int KiemTra(float x1, float y1, float x2, float y2, float x3, float y3, float x0, float y0)
{
	float SABC = (x1 * y2 + x2 * y3 + x3 * y1 - x2 * y1 - x3 * y2 - x1 * y3);
	float SMAB = (x1 * y2 + x2 * y0 + x0 * y1 - x2 * y1 - x0 * y2 - x1 * y0);
	float SMBC = (x0 * y2 + x2 * y3 + x3 * y0 - x2 * y0 - x3 * y2 - x0 * y3);
	float SMAC = (x1 * y0 + x0 * y3 + x3 * y1 - x0 * y1 - x3 * y0 - x1 * y3);
	float S = SMAB + SMAC + SMBC;
	if (S == SABC)
		return 1;
	return 0;
}

void Xuat(float x, float y)
{
	cout << "Hoanh do: " << x << endl;
	cout << "Tung do: " << y << endl;
}