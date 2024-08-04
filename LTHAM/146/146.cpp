#include <iostream>
using namespace std;

int ktDoiXung(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (ktDoiXung(n) == 1)
		cout << "Doi xung" << endl;
	else
		cout << "Khong phai doi xung" << endl;
	return 0;
}

int ktDoiXung(int n)
{
	int dn = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	
	if (dn == n)
		return 1;
	return 0;
}
