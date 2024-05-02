#include <bits/stdc++.h>
using namespace std;
class Matrix
{
    int NumberRow, NumberCol;
    int arr[5][5];

public:
    void input(int i, int j)
    {
        NumberRow = i;
        NumberCol = j;
        for (int a = 0; a < NumberRow; a++)
        {
            for (int b = 0; b < NumberCol; b++)
            {
                cout << "a" << a + 1 << b + 1 << " = ";
                cin >> arr[a][b];
            }
        }
    }
    void output()
    {
        cout << "The matrix:" << endl;
        for (int a = 0; a < NumberRow; a++)
        {
            for (int b = 0; b < NumberRow; b++)
            {
                cout << arr[a][b] << " ";
            }
            cout << endl;
        }
    }
    Matrix operator+(Matrix obj2)
    {
        Matrix temp;
        for (int a = 0; a < NumberRow; a++)
        {
            for (int b = 0; b < NumberRow; b++)
            {
                temp.arr[a][b] = arr[a][b] + obj2.arr[a][b];
            }
        }
        return temp;
    }
    friend void Multiplication(Matrix Obj1, Matrix Obj2, int a);
};
void Multiplication(Matrix Obj1, Matrix Obj2, int a)
{
    Matrix temp;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            temp.arr[i][j] = 0;
        }
    }
    for (int p = 0; p < a; p++)
    {
        for (int q = 0; q < a; q++)
        {
            for (int k = 0; k < a; k++)
            {
                temp.arr[p][q] = temp.arr[p][q] + Obj1.arr[p][k] * Obj2.arr[k][q];
            }
        }
    }
    temp.output();
}
int main()
{
    int i, j;
    Matrix Obj1, Obj2, Obj3;
    cout << "Enter the Row number: ";
    cin >> i;
    cout << "Enter the Column number: ";
    cin >> j;
    Obj1.input(i, j);
    Obj2.input(i, j);
    Obj3 = Obj1 + Obj2;
    Obj3.output();
    Multiplication(Obj1, Obj2, i);

    return 0;
}