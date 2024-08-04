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
		s = s * dv;
		t = t / 10;
	}
	cout << "Tich la: " << s << endl;
	return 0;
}