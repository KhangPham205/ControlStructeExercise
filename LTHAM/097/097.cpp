#include <iostream>
using namespace std;

float Tong(float, int);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	cout << "S = " << Tong(x, n) << endl;
	return 0;
}

float Tong(float x, int n)
{
	float s = 0;
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		s = sqrt(t + s);
		i++;
	}
	return s;
}