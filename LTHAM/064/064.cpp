#include <iostream>
using namespace std;

int ChuSoLonNhat(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	cout << "Chu so lon nhat la: " << ChuSoLonNhat(n) << endl;
	return 0;
}

int ChuSoLonNhat(int nn)
{
	int lc = nn % 10;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv > lc)
			lc = dv;
		t = t / 10;
	}
	return lc;
}
