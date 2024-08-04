#include <iostream>
using namespace std;

float ChuVi(int, float);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float r;
	cout << "Nhap r: ";
	cin >> r;

	float p = ChuVi(n, r);
	cout << "Chu vi da giac n canh la: " << p << endl;
	return 0;
}

float ChuVi(int nn, float rr)
{
	return 2 * nn * rr * sin(3.14 / nn);
}
