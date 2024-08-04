#include <iostream>
using namespace std;

float DienTich(float);

int main()
{
	float r;
	cout << "Nhap r: ";
	cin >> r;

	cout << "Dien tich la: " << DienTich(r) << endl;
	return 0;
}

float DienTich(float rr)
{
	return 3.14 * rr * rr;
}
