#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Nhap a: ";
	cin >> a;

	int b;
	cout << "Nhap b: ";
	cin >> b;

	int lc = a;
	if (lc < b)
		lc = b;
	cout << "Gia tri lon nhat: " << lc << endl;
	return 0;
}