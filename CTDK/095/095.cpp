#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float s = 0;
	int i = n;
	while (i >= 1)
	{
		s = sqrt(i + s);
		i--;
	}
	cout << "S = " << s << endl;
	return 0;
}