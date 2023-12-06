#include<iostream>
using namespace std;
class test
{
    int x,y;
public:
    test(int x=0,int y=0)
    {
        this->x=x;
        this->y=y;
    }

    test &setx(int a)
    {
        x=a;
        return *this;
    }
    test &sety(int b)
    {
        y=b;
        return *this;
    }
    void display()
    {
        cout<<x<<"\t"<<y<<endl;
    }
};
int main()
{
    test obj(5,7);
    obj.setx(10).sety(20);
    obj.display();
    return 0;
}
