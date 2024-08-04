#include <iostream>
using namespace std;

int bcnn(int, int);

int main()
{
	int a;
	cout << "Nhap a: ";
	cin >> a;

	int b;
	cout << "Nhap b: ";
	cin >> b;
	
	cout << "Boi chung nho nhat: " << bcnn(a, b) << endl;
	return 0;
}

int bcnn(int a, int b)
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
	return abs(a * b) / (m + n);
}
