#include <iostream>
using namespace std;

float ChuVi(float);

int main()
{
	float r;
	cout << "Nhap r: ";
	cin >> r;

	cout << "Chu vi la: " << ChuVi(r) << endl;
	return 0;
}

float ChuVi(float rr)
{
	return 2 * 3.14 * rr;
}
