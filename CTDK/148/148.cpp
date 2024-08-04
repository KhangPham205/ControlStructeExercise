#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int flag = 1;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			flag = 0;
		t /= 10;
	}
	if (flag == 1)
		cout << "So toan chan" << endl;
	else
		cout << "So khong toan chan" << endl;
	return 0;
}