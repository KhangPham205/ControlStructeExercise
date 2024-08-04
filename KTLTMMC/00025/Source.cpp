#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void LietKe(int[], int);

int main()
{
	int a[100];
	int k;
	Nhap(a, k);
	LietKe(a, k);
	return 0;
}

void Nhap(int a[], int& k)
{
	cout << "Nhap so luong phan tu: ";
	cin >> k;
	for (int i = 0; i < k; i++)
		a[i] = rand() % (100 + 1);
}

void LietKe(int a[], int k)
{
	for (int i = 0; i < k; ++i)
		if (a[i] % 2 != 0)
			cout << setw(5) << a[i];
}
