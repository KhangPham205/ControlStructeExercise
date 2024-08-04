#include <iostream>
using namespace std;

float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	
	cout << "S = " << Tong(n) << endl;
	return 0;
}

float Tong(int n)
{
	float s = 0;
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * i;
		s = sqrt(t + s);
		i++;
	}
	return s;
}