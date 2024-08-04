#include <iostream>
using namespace std;

int ktNguyenTo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (ktNguyenTo(n) == 1)
		cout << "So nguyen to" << endl;
	else
		cout << "Khong phai so nguyen to" << endl;
	return 0;
}

int ktNguyenTo(int n)
{
	int dem = 0;
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			dem++;
		i++;
	}
	if (dem == 2)
		return 1;
	return 0;
}
