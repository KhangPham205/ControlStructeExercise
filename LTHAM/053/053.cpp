#include <iostream>
using namespace std;

void DuyetUocLe(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "So luong uoc le cua " << n << " : " << endl;
	DuyetUocLe(n);
	return 0;
}

void DuyetUocLe(int nn)
{
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			cout << i << endl;
		i = i + 2;
	}
}
