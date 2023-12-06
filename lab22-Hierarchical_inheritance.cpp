#include<iostream>
using namespace std;
class X
{

public:
    int a,b;
    void get_data()
    {
        cin>>a>>b;
    }
};
class Y:public X
{
public:
   void product()
    {
        cout<< "product = "<<a*b<<endl;
    }
};
class Z:public X
{
public:
   void sum()
    {
        cout<<"sum = "<<a+b<<endl;
    }
};
int main()
{
    Y obj1;
    Z obj2;
    obj1.get_data();
    obj1.product();
    obj2.get_data();
    obj2.sum();
    return 0;
}

