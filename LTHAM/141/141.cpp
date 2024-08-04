#include <iostream>
using namespace std;

int ChuSoDT(int n);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	cout << "Chu so dau tien: " << ChuSoDT(n) << endl;
	return 0;
}

int ChuSoDT(int n)
{
	int dt = abs(n);
	while (dt >= 10)
		dt = dt / 10;
	return dt;
}
