#include <iostream>
using namespace std;

int ChuSoHT(int n);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	if (ChuSoHT(n) == 1)
		cout << "So hoan thien" << endl;
	else
		cout << "So khong hoan thien " << endl;
	return 0;
}

int ChuSoHT(int n)
{
	int s = 0;
	int i = 1;
	while (i < n)
	{
		if (n % i == 0)
			s = s + i;
		i++;
	}
	if (s == n)
		return 1;
	return 0;
}