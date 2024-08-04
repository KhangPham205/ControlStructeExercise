#include <iostream>
using namespace std;

int ChuSoNhoNhat(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Chu so nho nhat la: " << ChuSoNhoNhat(n) << endl;
	return 0;
}

int ChuSoNhoNhat(int nn)
{
	int lc = nn % 10;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv < lc)
			lc = dv;
		t = t / 10;
	}
	return lc;
}
