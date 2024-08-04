#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float r;
	cout << "Nhap r: ";
	cin >> r;

	float s = n * r * r * sin(2 * 3.14 / n) / 2;
	cout << "Dien tich da giac n canh la: " << s << endl;
	return 0;
}