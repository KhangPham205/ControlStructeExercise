#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int dem = 0;
	int i = 2;
	while (i <= n)
	{
		if (n % i == 0)
			dem++;
		i = i + 2;
	}
	cout << "So luong uoc so chan la: " << dem << endl;
	return 0;
}