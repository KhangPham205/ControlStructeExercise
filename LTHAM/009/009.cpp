#include <iostream>
using namespace std;

float DienTichDaGiac(int, float);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float r;
	cout << "Nhap r: ";
	cin >> r;

	float s = DienTichDaGiac(n, r);
	cout << "Dien tich da giac n canh la: " << s << endl;
	return 0;
}

float DienTichDaGiac(int nn, float rr)
{
	return nn * rr * rr * sin(2 * 3.14 / nn) / 2;
}
