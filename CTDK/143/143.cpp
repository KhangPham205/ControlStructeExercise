#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int s = 0;
	int i = 1;
	while (i < n)
	{
		if (n % i == 0)
			s = s + i;
		i++;
	}
	if (s == n)
		cout << "So hoan thien" << endl;
	else
		cout << "So khong hoan thien " << endl;
	return 0;
}