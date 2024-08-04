#include <iostream>
using namespace std;

bool ktNguyenTo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	if (ktNguyenTo(n))
		cout << "La so nguyen to" << endl;
	else
		cout << "Khong la so nguyen to" << endl;
	return 0;
}

bool ktNguyenTo(int nn)
{
	int dem = 0;
	for (int i = 1; i <= nn; i++)
		if (nn % i == 0)
			dem++;

	if (dem == 2)
		return true;
	else
		return false;
}
