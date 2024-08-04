#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int ahh = 0;
	int att = -1;
	int at = 3;
	int x2 = 2;
	int i = 2;
	while (i <= n)
	{
		x2 = x2 * 2;
		ahh = 5 * x2 + 5 * at - att;
		i++;
		att = at;
		at = ahh;
	}
	cout << "So hang thu " << n << " : " << ahh << endl;
	return 0;
}