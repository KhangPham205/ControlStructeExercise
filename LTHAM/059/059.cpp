#include <iostream>
using namespace std;

int SoLuongChuSo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	cout << "So luong chu so la: " << SoLuongChuSo(n) << endl;
	return 0;
}

int SoLuongChuSo(int nn)
{
	int dem = 0;
	int t = nn;
	while (t != 0)
	{
		dem++;
		t = t / 10;
	}
	return dem;
}