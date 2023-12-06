#include <iostream>
#include <conio.h>
using namespace std;
class matrix
{
    int m [3][3];
public:
    void read ()
    {
        cout << "Enter elements" << endl;
        int i, j;
        for (i = 0 ; i < 3 ; i ++)
        {
            for (j = 0 ; j < 3 ; j ++)
            {
                cin >> m [i][j];
            }
        }
    }
    void display ()
    {
        int i, j;
        for (i = 0 ; i < 3 ; i ++)
        {

            for (j = 0 ; j < 3 ; j ++)
            {
                cout << m [i][j]<<" ";
            }
            cout << endl;
        }

    }
    friend matrix trans (matrix);
};
matrix trans (matrix m1)
{
    matrix m2;
    int i, j;
    for (i = 0 ; i < 3 ; i ++)
    {
        for (j = 0 ; j < 3 ; j ++)
        {
            m2.m [i][j] = m1.m [j][i];
        }
    }
    return (m2);
}
int main ()
{
    matrix mat1, mat2;
    mat1.read ();
    cout << "Entered following matrix" << endl;
    mat1.display ();
    cout << endl;
    mat2 = trans (mat1);
    cout << "Transposed matrix" << endl;
    mat2.display ();
    getch ();
    return 0;
}
