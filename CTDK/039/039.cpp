#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 1;
	int i = 1;
	while (i <= n)
	{
		s = s * (1 + (float)1 / (i * i));
		i++;
	}
	cout << "Tich la: " << s << endl;
	return 0;
}