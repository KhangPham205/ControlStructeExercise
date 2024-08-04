#include <iostream>
using namespace std;

int Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	cout << "Tich la: " << Tong(n) << endl;
	return 0;
}

int Tong(int nn)
{
	int s = 1;
	int i = 1;
	while (i <= nn)
	{
		s = s * i;
		i++;
	}
	return s;
}