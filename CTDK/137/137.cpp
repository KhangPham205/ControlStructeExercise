#include <iostream>
using namespace std;

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	float f;
	if (x >= 5)
		f = x * x * x + 5 * x;
	else
		f = -2 * x * x + 4 * x - 9;

	cout << "Ket qua: " << f << endl;
	return 0;
}