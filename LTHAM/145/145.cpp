#include <iostream>
using namespace std;

int ktChinhPhuong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (ktChinhPhuong(n) == 1)
		cout << "So chinh phuong" << endl;
	else
		cout << "Khong phai so chinh phuong" << endl;
	return 0;
}

int ktChinhPhuong(int n)
{
	int flag = 0;
	int i = 0;
	while (i <= n)
	{
		if (i % i == 0)
			flag = 1;
		i++;
	}
	return flag;
}
