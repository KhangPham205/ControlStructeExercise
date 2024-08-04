#include <iostream>
using namespace std;

void HoanVi(int&, int&);

int main()
{
	int a;
	cout << "Nhap a: ";
	cin >> a;

	int b;
	cout << "Nhap b: ";
	cin >> b;

	HoanVi(a, b);
	cout << "Gia tri cua a va b sau hoan vi: " << endl;
	cout << "a = " << a << ", b = " << b << endl;
	return 0;
}

void HoanVi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
