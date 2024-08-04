#include <iostream>
using namespace std;

int SoHanga(int);
int SoHangb(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	cout << "So hang thu " << n << " : " << SoHanga(n) << ' ' << SoHangb(n) << endl;
	return 0;
}

int SoHanga(int n)
{
	int ahh = 0;
	int bhh = 0;
	int bt = 1;
	int at = 2;
	int i = 2;
	while (i <= n)
	{
		ahh = 2 * bt * bt + at * at;
		bhh = 2 * at * bt;
		i++;
		at = ahh;
		bt = bhh;
	}
	return ahh;
}
int SoHangb(int n)
{
	int ahh = 0;
	int bhh = 0;
	int bt = 1;
	int at = 2;
	int i = 2;
	while (i <= n)
	{
		ahh = 2 * bt * bt + at * at;
		bhh = 2 * at * bt;
		i++;
		at = ahh;
		bt = bhh;
	}
	return bhh;
}