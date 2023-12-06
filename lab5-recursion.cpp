#include <iostream>
using namespace std;
int with_recursion (int a);
int with_function (int a);
int main ()
{
    int n;
    cout << "Enter 1 for factorial without recursion 2 for factorial with recursion" << endl;
    cin >> n;
    switch (n)
    {
        case 1:
        {
            int a;
            cin >> a;
            int result = with_function (a);
            cout << "Factorial = " << result << endl;
            break;
        }
        case 2:
        {
            int a;
            cin >> a;
            int result = with_recursion (a);
            cout << "Factorial = " << result << endl;
            break;
        }
        default:
        {
            cout << "Invalid number" << endl;
        }
    }
    return 0;
}
int with_function (int a)
{
    int fact = 1;
    for (int i = 1 ; i <= a ; i ++)
    {
        fact = fact * i;
    }
    return fact;
}
int with_recursion (int a)
{
    if (a > 1)
    {
        return a * with_recursion (a - 1);
    }
    else
    {
        return 1;
    }
}
