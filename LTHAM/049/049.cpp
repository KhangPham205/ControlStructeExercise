#include <iostream>
#include <cmath>
using namespace std;

void DuyetUocSo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Cac uoc so cua n: " << endl;
	DuyetUocSo(n);
	return 0;
}

void DuyetUocSo(int nn)
{
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			cout << i << endl;
		i++;
	}
}
