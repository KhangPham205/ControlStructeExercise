#include <iostream>
using namespace std;

int TongChuSoChan(int);


int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	
	cout << "Tong cac chu so chan la: " << TongChuSoChan(n) << endl;
	return 0;
}

int TongChuSoChan(int nn)
{
	int s = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			s = s + dv;
		t = t / 10;
	}
	return s;
}