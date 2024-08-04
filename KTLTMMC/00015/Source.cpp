#include <iostream>
using namespace std;

bool ktHoanThien(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (ktHoanThien(n))
		cout << "La so hoan thien" << endl;
	else
		cout << "Khong la so hoan thien" << endl;
	return 0;
}

bool ktHoanThien(int nn)
{
	int s = 0;
	for (int i = 1; i < nn; i++)
		if (nn % i == 0)
			s = s + i;

	if (s == nn)
		return true;
	return false;
}
