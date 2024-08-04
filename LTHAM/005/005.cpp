#include <iostream>
using namespace std;

float TheTich(float);

int main()
{
	float r;
	cout << "Nhap r: ";
	cin >> r;

	cout << "The tich khoi cau la: " << TheTich(r) << endl;
	return 0;
}

float TheTich(float rr)
{
	return 4 * 3.14 * rr * rr * rr / 3;
}
