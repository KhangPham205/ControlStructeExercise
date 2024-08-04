#include <iostream>
using namespace std;

int main()
{
	float F;
	cout << "Nhap F: ";
	cin >> F;
	float C = 5 * (F - 32) / 9;
	cout << "C = " << C << endl;
	return 0;
}