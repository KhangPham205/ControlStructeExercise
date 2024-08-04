#include <iostream>
using namespace std;

int ChuSoHT(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int ht = ChuSoHT(n);
	cout << "Chu so hang tram: " << ht << endl;
	return 0;
}

int ChuSoHT(int nn)
{
	return (nn / 100) % 10;
}
