#include <iostream>
using namespace std;

bool ktChinhPhuong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (ktChinhPhuong(n))
		cout << "La so chinh phuong" << endl;
	else
		cout << "Khong la so chinh phuong" << endl;
	return 0;
}

bool ktChinhPhuong(int nn)
{
	bool flag = false;
	for (int i = 0; i <= nn; i++)
		if (i * i == nn)
			flag = true;

	return flag;
}
