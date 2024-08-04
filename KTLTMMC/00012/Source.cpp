#include <iostream>
using namespace std;

void HoanVi(float&, float&);

int main()
{
	float a;
	cout << "Nhap a: ";
	cin >> a;

	float b;
	cout << "Nhap b: ";
	cin >> b;

	HoanVi(a, b);
	cout << "Gia tri cua a va b sau hoan vi: " << endl;
	cout << "a = " << a << ", b = " << b << endl;
	return 0;
}

void HoanVi(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}
