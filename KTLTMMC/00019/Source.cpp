#include <iostream>
using namespace std;

bool ktDang2m(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (ktDang2m(n))
		cout << "La dang 2^m" << endl;
	else
		cout << "Khong la dang 2^m" << endl;
	return 0;
}

bool ktDang2m(int nn)
{
	if (nn < 1)
		return false;
	bool flag = true;
	for (int t = nn; t > 1; t = t / 2)
		if (t % 2 != 0)
			flag = false;
	return flag;
}
