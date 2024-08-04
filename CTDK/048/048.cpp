#include <iostream>
using namespace std;

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	int n;
	cout << "Nhap n: ";
	cin >> n;

	float s = 1;
	int i = 1;
	while (i <= n)
	{
		s = s * (x + i);
		i++;
	}
	cout << "Tong la: " << s << endl;
	return 0;
}