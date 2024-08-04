#include <iostream>
using namespace std;

void InterchangeSort(int a[], int n)
{
	for (int i = n - 1; i >= 1; i--)
		for (int j = i - 1; j >= 0; j--)
			if (a[i] < a[j])
		swap(a[i], a[j]);
}int main(){	int a[6] = { 5,3,4,1,8,9 };	InterchangeSort(a, 6);	for (int i = 0; i < 6; i++)
	{
		cout << a[i] << ' ';
	}}