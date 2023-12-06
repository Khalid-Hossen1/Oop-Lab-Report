#include<iostream>
using namespace std;
class base
{
    public:
    void show()
    {
        cout<< "Base class"<<endl;
    }
};
class derived : public base
{
    public:
    void show()
    {
        cout<< "Derived class"<<endl;
    }
};
int main()
{
    derived d;
    base b;
    b.show();
    d.show();
    return 0;
}

