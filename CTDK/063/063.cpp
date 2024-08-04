#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int s = 1;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 1)
			s = s * dv;
		t = t / 10;
	}
	cout << "Tich cac chu so le la: " << s << endl;
	return 0;
}