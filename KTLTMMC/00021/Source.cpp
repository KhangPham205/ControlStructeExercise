#include <iostream>
using namespace std;

bool ktDang5m(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (ktDang5m(n))
		cout << "La dang 5^m" << endl;
	else
		cout << "Khong la dang 5^m" << endl;
	return 0;
}

bool ktDang5m(int nn)
{
	if (nn < 1)
		return false;
	bool flag = true;
	for (int t = nn; t > 1; t = t / 5)
		if (t % 5 != 0)
			flag = false;
	return flag;
}
