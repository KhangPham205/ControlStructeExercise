#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib> // For rand() and RAND_MAX
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
void XuatCon(float[][500], int, int, int, int);
bool ktMaTranDuong(float[][500], int, int, int, int);
void TimConToanDuong(float[][500], int, int, int&, int&, int&, int&);

int main()
{
    float a[500][500];
    int m, n;
    cout << "Nhap ma tran: " << endl;
    Nhap(a, m, n);

    cout << "\nMa tran ban dau: " << endl;
    Xuat(a, m, n);

    int start_row, start_col, end_row, end_col;

    TimConToanDuong(a, m, n, start_row, start_col, end_row, end_col);
    cout << "Ma tran con toan duong xuat phat tu (" << start_row << "," << start_col << ") den (" << end_row << "," << end_col << "):" << endl;
    XuatCon(a, start_row, start_col, end_row, end_col);
    return 0;
}

void Nhap(float a[][500], int& m, int& n)
{
    cout << "Nhap dong: ";
    cin >> m;
    cout << "Nhap cot: ";
    cin >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = rand() / (RAND_MAX / 200.0) - 100.0;
}

void Xuat(float a[][500], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << setw(10) << setprecision(5) << a[i][j];
        cout << endl;
    }
}

void XuatCon(float a[][500], int start_row, int start_col, int end_row, int end_col)
{
    for (int i = start_row; i <= end_row; i++)
    {
        for (int j = start_col; j <= end_col; j++)
            cout << setw(10) << setprecision(5) << a[i][j];
        cout << endl;
    }   
}

bool ktMaTranDuong(float a[][500], int start_row, int start_col, int end_row, int end_col)
{
    for (int i = start_row; i <= end_row; i++)
        for (int j = start_col; j <= end_col; j++)
            if (a[i][j] <= 0)
                return false;
    return true;
}

void TimConToanDuong(float a[][500], int m, int n, int& start_row, int& start_col, int& end_row, int& end_col)
{
    start_row = start_col = end_row = end_col = 0;
    int max_area = 0;

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            for (int l = i; l < m; l++)
                for (int r = j; r < n; r++)
                    if (ktMaTranDuong(a, i, j, l, r))
                    {
                        int area = (l - i + 1) * (r - j + 1);
                        if (area > max_area)
                        {
                            max_area = area;
                            start_row = i;
                            start_col = j;
                            end_row = l;
                            end_col = r;
                        }
                    }
}
