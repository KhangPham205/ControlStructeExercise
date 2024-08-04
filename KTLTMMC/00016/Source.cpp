#include <iostream>
using namespace std;

bool ktDoiXung(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (ktDoiXung(n))
		cout << "La so doi xung" << endl;
	else
		cout << "Khong la so doi xung" << endl;
	return 0;
}

bool ktDoiXung(int nn)
{
	int k = abs(nn);
	int dn = 0;
	for (int t = k; t != 0; t = t / 10)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
	}

	if (dn == k)
		return true;
	return false;
}
