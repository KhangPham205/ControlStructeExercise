#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int ahh = 0;
	int at = -2;
	int x3 = 3;
	int x7 = 7;
	int i = 2;
	while (i <= n)
	{
		x3 = x3 * 3;
		x7 = x7 * 7;
		ahh = 5 * at + 2 * x3 - 6 * x7 + 12;
		i++;
		at = ahh;
	}
	cout << "So hang thu " << n << " : " << ahh << endl;
	return 0;
}