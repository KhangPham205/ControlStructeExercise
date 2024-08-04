#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float s = 0;
	int m = 0;
	int i = 1;
	while (i <= n)
	{
		m = m + i;
		s = s + (float)1 / m;
		i = i + 1;
	}
	cout << "Tong la: " << s << endl;
	return 0;
}