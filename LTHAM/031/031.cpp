#include <iostream>
using namespace std;

float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	cout << "Tong la: " << Tong(n) << endl;
	return 0;
}

float Tong(int nn)
{
	float s = 0;
	int i = 1;
	while (i <= 2 * nn + 1)
	{
		s = s + (float)1 / i;
		i = i + 2;
	}
	return s;
}