#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int ahh = 0;
	int bhh = 0;
	int bt = 1;
	int at = 2;
	int i = 2;
	while (i <= n)
	{
		ahh = 2 * bt * bt + at * at;
		bhh = 2 * at * bt;
		i++;
		at = ahh;
		bt = bhh;
	}
	cout << "So hang thu " << n << " : " << ahh << ' ' << bhh << endl;
	return 0;
}