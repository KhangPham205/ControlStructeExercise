#include <iostream>
using namespace std;

float TinhF(float);

int main()
{
	float C;
	cout << "Nhap C: ";
	cin >> C;

	cout << "F = " << TinhF(C) << endl;
	return 0;
}

float TinhF(float C)
{
	return 9 * C / 5 + 32;
}
