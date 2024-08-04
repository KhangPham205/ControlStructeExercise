#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int ahh = 0;
	int att = 1;
	int at = 1;
	int i = 2;
	while (i <= n)
	{
		ahh = at + att;
		i++;
		att = at;
		at = ahh;
	}
	cout << "So hang thu " << n << " : " << ahh << endl;
	return 0;
}