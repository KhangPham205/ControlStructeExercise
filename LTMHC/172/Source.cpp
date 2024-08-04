#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
void XuatCon(float[][500], int, int, int, int);
float TongMaTran(float[][500], int, int, int, int);
void TimConLonNhat(float[][500], int, int, int&, int&, int&, int&);

int main()
{
    float a[500][500];
    int m, n;
    cout << "Nhap ma tran: " << endl;
    TaoMaTran(a, m, n);

    cout << "\nMa tran ban dau: \n";
    XuatMaTran(a, m, n);

    int start_row, start_col, end_row, end_col;
    TimConLonNhat(a, m, n, start_row, start_col, end_row, end_col);

    cout << "Ma tran co tong lon nhat xuat phat tu (" << start_row << "," << start_col << ") den (" << end_row << "," << end_col << ")" << endl;
    XuatCon(a, start_row, start_col, end_row, end_col);
    return 0;
}

void TaoMaTran(float a[][500], int& m, int& n)
{
    cout << "Nhap so dong: ";
    cin >> m;
    cout << "Nhap so cot: ";
    cin >> n;

    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            a[i][j] = rand() / (RAND_MAX / 200.0) - 100.0;
}

void XuatMaTran(float a[][500], int m, int n)
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
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

float TongMaTran(float a[][500], int start_row, int end_row, int start_col, int end_col)
{
    float s = 0;
    for (int i = start_row; i <= end_row; i++)
        for (int j = start_col; j <= end_col; j++)
            s += a[i][j];
    return s;
}

void TimConLonNhat(float a[][500], int m, int n, int& start_row, int& start_col, int& end_row, int& end_col)
{
    start_row = start_col = end_row = end_col = 0;
    float lc = TongMaTran(a, 0, 0, m, n);

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            for (int l = i; l < m; l++)
                for (int r = j; r < n; r++)
                {
                    float s = TongMaTran(a, i, l, j, r);
                    if (s > lc)
                    {
                        lc = s;
                        start_row = i;
                        start_col = j;
                        end_row = l;
                        end_col = r;
                    }
                }
}
