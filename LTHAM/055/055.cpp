#include <iostream>
using namespace std;

int TichUocLe(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	cout << "Tich cac uoc so le la: " << TichUocLe(n) << endl;
	return 0;
}

int TichUocLe(int nn)
{
	int s = 1;
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			s = s * i;
		i = i + 2;
	}
	return s;
}
