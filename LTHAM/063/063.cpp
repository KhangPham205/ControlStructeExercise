#include <iostream>
using namespace std;

int TichChuSoLe(int);


int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tich cac chu so le la: " << TichChuSoLe(n) << endl;
	return 0;
}

int TichChuSoLe(int nn)
{
	int s = 1;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 1)
			s = s * dv;
		t = t / 10;
	}
	return s;
}