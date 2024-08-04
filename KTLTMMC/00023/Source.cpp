#include <iostream>
using namespace std;

int ChuSoDaoNguoc(int);

int main()
{
	int k;
	cout << "Nhap k: ";
	cin >> k;

	cout << "Chu so dao nguoc: " << ChuSoDaoNguoc(k) << endl;
	return 0;
}

int ChuSoDaoNguoc(int k)
{
	int dn = 0;
	for (int t = k; t != 0; t /= 10)
		dn = dn * 10 + t % 10;
	return dn;
}
