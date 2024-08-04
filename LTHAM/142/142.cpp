#include <iostream>
using namespace std;

int ChuSoDN(int n);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Chu so dao nguoc: " << ChuSoDN(n) << endl;
	return 0;
}

int ChuSoDN(int n)
{
	int dn = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	return dn;
}
