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
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		s = sqrt(t + s);
		i++;
	}
	cout << "S = " << s << endl;
	return 0;
}