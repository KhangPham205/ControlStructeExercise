#include <iostream>
using namespace std;

int KiemTraNamNhuan(int);

int main()
{
	int n;
	cout << "Nhap nam: ";
	cin >> n;

	if (KiemTraNamNhuan(n) == 1)
		cout << "La nam nhuan" << endl;
	else
		cout << "Khong la nam nhuan" << endl;
	return 0;
}

int KiemTraNamNhuan(int n)
{
	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
		return 1;
	return 0;
}
