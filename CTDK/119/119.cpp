#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float ahh = 0;
	float at = 2;
	int i = 2;
	while (i <= n)
	{
		ahh = (at * at + 2) / (2 * at);
		i++;
		at = ahh;
	}
	cout << "So hang thu " << n << " : " << ahh << endl;
	return 0;
}