#include <iostream>
using namespace std;

int ktDang2m(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (ktDang2m(n) == 1)
		cout << "La dang 2^m" << endl;
	else
		cout << "Khong la dang 2^m" << endl;
	return 0;
}

int ktDang2m(int n)
{
	int flag = 1;
	int t = n;
	while (t > 1)
	{
		int du = t % 2;
		if (du != 0)
			flag = 0;
		t = t / 2;
	}
	return flag;
}
