#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			cout << i << endl;
		i = i + 2;
	}
	return 0;
}