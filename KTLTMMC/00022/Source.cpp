#include <iostream>
using namespace std;

int ChuSoDau(int);

int main()
{
	int k;
	cout << "Nhap k: ";
	cin >> k;

	cout << "Chu so dau: " << ChuSoDau(k) << endl;
	return 0;
}

int ChuSoDau(int k)
{
	int dt = abs(k);
	while (dt >= 10)
		dt /= 10;
	return dt;
}
