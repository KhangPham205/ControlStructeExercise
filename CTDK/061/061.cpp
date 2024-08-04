#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int dem = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 1)
			dem++;
		t = t / 10;
	}
	cout << "So luong chu so le la: " << dem << endl;
	return 0;
}