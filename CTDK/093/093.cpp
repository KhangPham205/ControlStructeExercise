#include <iostream>
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
		s = sqrt(2 + s);
		i++;
	}
	cout << "S = " << s << endl;
	return 0;
}