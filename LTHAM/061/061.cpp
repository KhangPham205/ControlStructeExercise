#include <iostream>
using namespace std;

int SoLuongChuSoLe(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	cout << "So luong chu so le la: " << SoLuongChuSoLe(n) << endl;
	return 0;
}

int SoLuongChuSoLe(int nn)
{
	int dem = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 1)
			dem++;
		t = t / 10;
	}
	return dem;
}
