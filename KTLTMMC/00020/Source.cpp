#include <iostream>
using namespace std;

bool ktDang3m(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (ktDang3m(n))
		cout << "La dang 3^m" << endl;
	else
		cout << "Khong la dang 3^m" << endl;
	return 0;
}

bool ktDang3m(int nn)
{
	if (nn < 1)
		return false;
	bool flag = true;
	for (int t = nn; t > 1; t = t / 3)
		if (t % 3 != 0)
			flag = false;
	return flag;
}
