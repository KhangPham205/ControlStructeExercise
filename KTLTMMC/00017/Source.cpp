#include <iostream>
using namespace std;

bool ktToanLe(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (ktToanLe(n))
		cout << "La so toan le" << endl;
	else
		cout << "Khong la so toan le" << endl;
	return 0;
}

bool ktToanLe(int nn)
{
	if (nn == 0)
		return false;
	bool flag = true;
	for (int t = nn = abs(nn); t != 0; t = t / 10)
		if ((t % 10) % 2 == 0)
			flag = false;
	return flag;
}
