#include <iostream>
using namespace std;

int SoHang(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	
	cout << "So hang thu " << n << " : " << SoHang(n) << endl;
	return 0;
}

int SoHang(int n)
{
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
	return ahh;
}