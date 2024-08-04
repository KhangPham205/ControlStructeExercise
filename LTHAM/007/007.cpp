#include <iostream>
using namespace std;

float TinhC(float);

int main()
{
	float F;
	cout << "Nhap F: ";
	cin >> F;

	cout << "C = " << TinhC(F) << endl;
	return 0;
}

float TinhC(float F)
{
	return 5 * (F - 32) / 9;
}