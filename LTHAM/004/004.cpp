#include <iostream>
using namespace std;

float DienTichXungQuanh(float);

int main()
{
	float r;
	cout << "Nhap r: ";
	cin >> r;

	cout << "Dien tich xung quanh cua hinh cau la: " << DienTichXungQuanh(r) << endl;
	return 0;
}

float DienTichXungQuanh(float rr)
{
	return 4 * 3.14 * rr * rr;
}
