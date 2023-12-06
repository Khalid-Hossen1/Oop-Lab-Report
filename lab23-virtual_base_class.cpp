#include<iostream>
using namespace std;
class student
{
    protected:
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
class test:virtual public student
{
protected:
    float p1,p2;
public:
   void get_marks(float x,float y)
    {
        p1=x;
        p2=y;
    }
    void put_marks()
    {
        cout<< "mark obtains: "<<endl<<"Part1 = "<<p1<<endl<< "Part2 = "<<p2<<endl;
    }
};
class sports:virtual public student
{
protected:
    float score;
public:

    void get_score(float s)
    {
        score=s;
    }
    void put_score()
    {
        cout<< "score = "<<score<<endl;
    }
};
class result:public test,public sports
{
    float total;
public:
    void display()
    {
        total=p1+p2+score;
    put_number();
    put_marks();
    put_score();
    cout<< "Total score = "<<total<<endl;
    }

};
int main()
{
    result khalid;
    khalid.get_number(678);
    khalid.get_marks(30.5,25.5);
    khalid.get_score(7.0);
    khalid.display();
    return 0;
}

