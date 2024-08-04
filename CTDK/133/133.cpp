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

	if (x + y > z && y + z > x && x + z > y)
	{
		if (x == y && y == z)
			cout << "Tam giac deu";
		else
		{
			if ((x * x == y * y + z * z) || (y * y == x * x + z * z) || (z * z == y * y + x * x))
			{
				if (x == y || y == z || z == x)
					cout << "Tam giac vuong can";
				else
					cout << "Tam giac vuong";
			}
			else
			{
				if (x == y || y == z || z == x)
					cout << "Tam giac can";
				else
					cout << "Tam giac thuong";
			}
		}
	}
	else
		cout << "Khong la tam giac" << endl;

	return 0;
}