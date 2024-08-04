#include <iostream>
using namespace std;

int DemChuSo(int);

int main()
{
	int k;
	cout << "Nhap k: ";
	cin >> k;

	cout << "So luong chu so: " << DemChuSo(k) << endl;
	return 0;
}

int DemChuSo(int k)
{
	if (k == 0)
		return 1;
	int dem = 0;
	for (int t = k; t != 0; t /= 10)
		dem++;
	return dem;
}

