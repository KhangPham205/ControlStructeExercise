#include <iostream>
using namespace std;

int ChuSoHC(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int hc = ChuSoHC(n);
	cout << "Chu so hang chuc: " << hc << endl;
	return 0;
}

int ChuSoHC(int nn)
{
	return (nn / 10) % 10;
}
