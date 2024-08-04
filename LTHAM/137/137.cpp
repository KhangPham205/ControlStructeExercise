#include <iostream>
using namespace std;

float TinhF(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	cout << "Ket qua: " << TinhF(x) << endl;
	return 0;
}

float TinhF(float x)
{
	float f;
	if (x >= 5)
		f = x * x * x + 5 * x;
	else
		f = -2 * x * x + 4 * x - 9;
	return f;
}