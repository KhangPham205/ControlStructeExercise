#include <iostream>
using namespace std;

int ChuSoDV(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int dv = ChuSoDV(n);
	cout << "Chu so hang don vi: " << dv << endl;
	return 0;
}

int ChuSoDV(int nn)
{
	return nn % 10;
}
