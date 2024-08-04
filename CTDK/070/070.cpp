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

	float s = 0;
	float t = x * x;
	int i = 1;
	while (i <= n)
	{
		t = t * x * x;
		s = s + t;
		i = i + 1;
	}
	cout << "Tong la: " << s << endl;
	return 0;
}