#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int s = 1;
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			s = s * i;
		i = i + 2;
	}
	cout << "Tich cac uoc so le la: " << s << endl;
	return 0;
}