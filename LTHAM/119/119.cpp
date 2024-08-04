#include <iostream>
using namespace std;

float SoHang(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	
	cout << "So hang thu " << n << " : " << SoHang(n) << endl;
	return 0;
}

float SoHang(int n)
{
	float ahh = 0;
	float at = 2;
	int i = 2;
	while (i <= n)
	{
		ahh = (at * at + 2) / (2 * at);
		i++;
		at = ahh;
	}
	return ahh;
}