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
		s = s * i;
		i++;
	}
	cout << "Tich la: " << s << endl;
	return 0;
}