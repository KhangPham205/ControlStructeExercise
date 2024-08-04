#include <iostream>
using namespace std;

int TonTaiChuSoChan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	
	if (TonTaiChuSoChan(n) == 1)
	{
		cout << "Ton tai chu so chan" << endl;
	}
	else
	{
		cout << "Khong ton tai chu so chan" << endl;
	}
	return 0;
}

int TonTaiChuSoChan(int nn)
{
	int flag = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = 1;
		t = t / 10;
	}
	if (flag == 1)
		return 1;
	return 0;
}
