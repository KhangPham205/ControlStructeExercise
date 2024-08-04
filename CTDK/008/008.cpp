#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float r;
	cout << "Nhap r: ";
	cin >> r;

	float p = 2 * n * r * sin(3.14 / n);
	cout << "Chu vi da giac n canh la: " << p << endl;
	return 0;
}