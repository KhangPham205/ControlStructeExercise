#include <iostream>
using namespace std;

int ucln(int, int);

int main()
{
	int a;
	cout << "Nhap a: ";
	cin >> a;

	int b;
	cout << "Nhap b: ";
	cin >> b;

	cout << "Uoc chung lon nhat: "<< ucln(a, b) << endl;
	return 0;
}

int ucln(int a, int b)
{
	int m = abs(a);
	int n = abs(b);
	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	return m + n;
}
