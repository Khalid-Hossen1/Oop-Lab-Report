#include<iostream>
using namespace std;
class A
{
    int roll;
public:
    void get_number(int a)
    {
        roll=a;
    }
    void put_number()
    {
        cout<< "Roll = "<<roll<<endl;
    }
};
class B:public A
{

public:
    float x,y;
   void get_marks(float m,float n)
    {
        x=m;
        y=n;
    }
    void put_marks()
    {
        cout<< "x = "<<x<<endl;
        cout<< "y = "<<y<<endl;
    }
};
class C
{

public:
    float score;
    void get_score(float s)
    {
        score=s;
    }
    void put_score()
    {
        cout<< "score = "<<score<<endl;
    }
};
class D:public B,public C
{
    float total;
public:
    void display()
    {
        total=x+y+score;
    put_number();
    put_marks();
    put_score();
    cout<< "Total score = "<<total<<endl;
    }

};
int main()
{
    D khalid;
    khalid.get_number(1234);
    khalid.get_marks(27.5,33.0);
    khalid.get_score(6.0);
    khalid.display();
    return 0;
}
