#include <iostream>
using namespace std;

void InterchangeSort(int a[], int n)
{
	for (int i = n - 1; i >= 1; i--)
		for (int j = i - 1; j >= 0; j--)
			if (a[i] < a[j])
		swap(a[i], a[j]);
}
	{
		cout << a[i] << ' ';
	}