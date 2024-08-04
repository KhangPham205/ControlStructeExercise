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

	float x0;
	cout << "Nhap x0: ";
	cin >> x0;

	float y0;
	cout << "Nhap y0: ";
	cin >> y0;

	float SABC = (x1 * y2 + x2 * y3 + x3 * y1 - x2 * y1 - x3 * y2 - x1 * y3);
	float SMAB = (x1 * y2 + x2 * y0 + x0 * y1 - x2 * y1 - x0 * y2 - x1 * y0);
	float SMBC = (x0 * y2 + x2 * y3 + x3 * y0 - x2 * y0 - x3 * y2 - x0 * y3);
	float SMAC = (x1 * y0 + x0 * y3 + x3 * y1 - x0 * y1 - x3 * y0 - x1 * y3);
	float S = SMAB + SMAC + SMBC;

	if (S == SABC)
		cout << "M trong ABC" << endl;
	else
		cout << "M ngoai ABC" << endl;

	return 0;
}