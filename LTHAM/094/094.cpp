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
	int i = 1;
	while (i <= n)
	{
		s = sqrt(i + s);
		i++;
	}
	return s;
}