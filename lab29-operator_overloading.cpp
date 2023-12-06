#include<iostream>
using namespace std;
class complexi
{
    float x,y;
public:
    complexi(){}
    complexi(float real,float img)
    {
        x=real;
        y=img;
    }

    complexi operator+(complexi);

    void display()
    {
        cout<<x<<"+i"<<y<<endl;
    }
};
complexi complexi :: operator+(complexi c)
{
    complexi temp;
    temp.x=x+c.x;
    temp.y=y+c.y;
    return temp;
}
int main()
{
    complexi c1,c2,c3;
    c1=complexi(2.5,3.5);
    c2=complexi(1.6,2.7);
    c3=c1+c2;
    cout<<"c1 = ";
    c1.display();
    cout<<"c2 = ";
    c2.display();
    cout<<"c3 = ";
    c3.display();
    return 0;
}

