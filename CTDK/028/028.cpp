#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int s = 0;
	int i = 1;
	while (i <= n)
	{
		s = s + i * i;
		i++;
	}
	cout << "Tong la: " << s << endl;
	return 0;
}