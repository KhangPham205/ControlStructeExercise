#include <iostream>
using namespace std;

int main()
{
	float x1;
	cout << "Nhap x1: ";
	cin >> x1;

	float y1;
	cout << "Nhap y1: ";
	cin >> y1;

	float x2;
	cout << "Nhap x2: ";
	cin >> x2;

	float y2;
	cout << "Nhap y2: ";
	cin >> y2;

	float x3;
	cout << "Nhap x3: ";
	cin >> x3;

	float y3;
	cout << "Nhap y3: ";
	cin >> y3;

	float AB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	float AC = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	float BC = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	float p = (AB + AC + BC) / 2;
	float s = sqrt(p * (p - AB) * (p - AC) * (p - BC));
	cout << "Chu vi tam giac la: " << s << endl;
	return 0;
}