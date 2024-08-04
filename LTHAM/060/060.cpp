#include <iostream>
using namespace std;

int TichChuSo(int);


int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tich cac chu so la: " << TichChuSo(n) << endl;
	return 0;
}

int TichChuSo(int nn)
{
	int s = 1;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		s = s * dv;
		t = t / 10;
	}
	return s;
}
