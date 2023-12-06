#include<iostream>
using namespace std;
class a
{
    int id=101;
    string name="Khalid";
public:
    friend class b;
};
class b
{
public:
    void display(a obj)
    {
        cout<<obj.id<<endl;
        cout<<obj.name<<endl;
    }
};
int main()
{
    a obj1;
    b obj2;
    obj2.display(obj1);
    return 0;
}

