#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	int i = 1;
	while (i <= n)
	{
		s = s + pow(i, 4);
		i++;
	}
	cout << "Tong la: " << s << endl;
	return 0;
}