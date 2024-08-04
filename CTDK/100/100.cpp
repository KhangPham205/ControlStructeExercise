#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float s = 0;
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * i;
		s = pow(s + t, (float)1 / (i + 1));
		i++;
	}
	cout << "S = " << s << endl;
	return 0;
}