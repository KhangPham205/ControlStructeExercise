#include <iostream>
using namespace std;

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	float y;
	cout << "Nhap y: ";
	cin >> y;

	float z;
	cout << "Nhap z: ";
	cin >> z;

	if (x + y > z && x + z > y && y + z > x)
	{
		cout << "La tam giac" << endl;
	}
	else
	{
		cout << "Khong la tam giac" << endl;
	}
	return 0;
}