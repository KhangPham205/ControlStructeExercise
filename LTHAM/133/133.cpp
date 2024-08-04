#include <iostream>
using namespace std;

void Nhap(float&);
void KiemTra(float, float, float);
void Xuat(float);

int main()
{
	float x;
	cout << "Nhap canh thu nhat: ";
	Nhap(x);
	float y;
	cout << "Nhap canh thu hai: ";
	Nhap(y);
	float z;
	cout << "Nhap canh thu ba: ";
	Nhap(z);

	cout << "Canh thu nhat: " << endl;
	Xuat(x);
	cout << "Canh thu hai: " << endl;
	Xuat(y);
	cout << "Canh thu ba: " << endl;
	Xuat(z);

	KiemTra(x, y, z);
	return 0;
}

void Nhap(float& d)
{
	cin >> d;
}

void KiemTra(float x, float y, float z)
{
	if (x + y > z && y + z > x && x + z > y)
	{
		if (x == y && y == z)
			cout << "Tam giac deu";
		else
		{
			if ((x * x == y * y + z * z) || (y * y == x * x + z * z) || (z * z == y * y + x * x))
			{
				if (x == y || y == z || z == x)
					cout << "Tam giac vuong can";
				else
					cout << "Tam giac vuong";
			}
			else
			{
				if (x == y || y == z || z == x)
					cout << "Tam giac can";
				else
					cout << "Tam giac thuong";
			}
		}
	}
	else
		cout << "Khong la tam giac" << endl;
}

void Xuat(float d)
{
	cout << d << endl;
}