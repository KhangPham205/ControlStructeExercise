#include <iostream>
using namespace std;

int TichUocSo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	cout << "Tich la: " << TichUocSo(n) << endl;
	return 0;
}

int TichUocSo(int nn)
{
	int s = 1;
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			s = s * i;
		i++;
	}
	return s;
}
