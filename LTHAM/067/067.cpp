#include <iostream>
using namespace std;

int TonTaiChuSoLe(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	
	if (TonTaiChuSoLe(n) == 1)
	{
		cout << "Ton tai chu so le" << endl;
	}
	else
	{
		cout << "Khong ton tai chu so le" << endl;
	}
	return 0;
}

int TonTaiChuSoLe(int nn)
{
	int flag = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			flag = 1;
		t = t / 10;
	}
	if (flag == 1)
		return 1;
	return 0;
}
