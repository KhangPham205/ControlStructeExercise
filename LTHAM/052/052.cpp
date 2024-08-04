#include <iostream>
using namespace std;

int SoLuongUoc(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "So luong uoc so: " << SoLuongUoc(n) << endl;
	return 0;
}

int SoLuongUoc(int nn)
{
	int dem = 0;
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			++dem;
		i++;
	}
	return dem;
}
