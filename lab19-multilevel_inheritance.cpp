#include <iostream>
using namespace std;
class student
{
protected:
    int roll;
public:
    void get_roll (int);
    void put_roll ();
};
void student :: get_roll (int a)
{
    roll = a;
}
void student :: put_roll ()
{
    cout << "Roll = " << roll << endl;
}
class test : public student
{
protected:
    float sub1;
    float sub2;
public:
    void get_marks (float, float);
    void put_marks ();
};
void test :: get_marks (float x, float y)
{
    sub1 = x;
    sub2 = y;
}
void test :: put_marks ()
{
    cout << "marks sub1 = " << sub1 << endl;
    cout << "marks sub2 = " << sub2 << endl;
}
class result : public test
{
    float total;
public:
    void display ();
};
void result :: display ()
{
    total = sub1 + sub2;
    put_roll ();
    put_marks ();
    cout << "Total = " << total << endl;
}
int main ()
{
    result student;
    student.get_roll (220106);
    student.get_marks (40, 50);
    student.display ();
    return 0;
}
