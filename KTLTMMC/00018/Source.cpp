#include <iostream>
using namespace std;

bool ktToanChan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (ktToanChan(n))
		cout << "La so toan chan" << endl;
	else
		cout << "Khong la so toan chan" << endl;
	return 0;
}

bool ktToanChan(int nn)
{
	bool flag = true;
	for (int t = nn = abs(nn); t != 0; t = t / 10)
		if ((t % 10) % 2 != 0)
			flag = false;
	return flag;
}
