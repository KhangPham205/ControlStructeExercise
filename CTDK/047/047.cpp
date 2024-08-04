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
		s = s + sqrt(1 + 1/(pow(i,2)) + 1/(pow(i+1,2)));
		i++;
	}
	cout << "Tong la: " << s << endl;
	return 0;
}