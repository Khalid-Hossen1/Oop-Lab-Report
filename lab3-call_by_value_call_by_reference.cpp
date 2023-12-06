#include <iostream>
using namespace std;
void swap_without_pointer (int &a, int &b);
void swap_with_pointer (int *a, int *b);
int main ()
{
    int n;
    cout << "Enter 1 for passing by references without pointer and 2 for with pointer" << endl;
    cin >> n;
    switch (n)
    {
        case 1:
        {
            int a, b;
            cout << "Enter a" << endl;
            cin >> a;
            cout << "Enter b" << endl;
            cin >> b;
            swap_without_pointer (a, b);
            cout << "a = " << a << endl << "b = " << b << endl;
            break;
        }
        case 2:
        {
            int a, b;
            cout << "Enter a" << endl;
            cin >> a;
            cout << "Enter b" << endl;
            cin >> b;
            swap_with_pointer (&a, &b);
            cout << "a = " << a << endl << "b = " << b << endl;
            break;
        }
        default:
        {
            cout << "Invalid number" << endl;
        }
    }
    return 0;
}
void swap_without_pointer (int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap_with_pointer (int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
