#include <iostream>
using namespace std;

int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;

	int y;
	cout << "Nhap y: ";
	cin >> y;

	int n = x;

	while (n <= y)
	{
		bool dk1 = ((n % 4 == 0) && (n % 100 != 0));
		bool dk2 = (n % 400 == 0);
		if(dk1 || dk2)
		{
			cout << n << endl;
		}
		n++;
	}
	
	return 0;
}