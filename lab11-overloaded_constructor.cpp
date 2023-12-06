#include <iostream>
using namespace std;
class student
{

public:
    string name;
    double result;
    int roll;
    student ()
    {
    }
    student (int a, double b)
    {

        roll = a;
        result = b;
    }
    void sum (student a, student b)
    {

        roll = a.roll + b.roll;
        result = a.result + b.result;
    }
    friend student back (student c);
    void display ()
    {
        cout << roll << endl << result << endl;
    }
};
student back (student c)
{
    return c;
}
int main ()
{

    student obj1;
    student obj2 (12, 1.76);
    student obj3 (13, 1.47);
    student obj4;
    obj4.sum (obj2, obj3);
    obj4.display ();
    student obj5;
    obj5 = back (obj2);
    obj5.display ();
    return 0;
}
