#include <iostream>
using namespace std;

int main()
{
	float a;
	cout << "Nhap a: ";
	cin >> a;

	float b;
	cout << "Nhap b: ";
	cin >> b;

	float f;
	if (a == 0)
		if (b == 0)
			cout << "Vo so nghiem" << endl;
		else
			cout << "Vo nghiem" << endl;
	else
	{
		float x = -b / a;
		cout << x << endl;
	}

	return 0;
}