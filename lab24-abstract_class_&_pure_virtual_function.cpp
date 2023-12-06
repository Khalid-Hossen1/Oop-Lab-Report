#include<iostream>
using namespace std;
class base
{
    int id;
public:
    int get_id()
    {
        id=220133;
        return id;
    }
    virtual void func()=0;
};
class child:public base
{
public:
    void func()
    {
        cout<< "Name: Khalid"<< "\n"<< "ID: "<<get_id()<<endl;
    }
};
int main()
{
    child obj;
    obj.func();
    return 0;
}
