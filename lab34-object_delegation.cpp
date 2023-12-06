#include<iostream>
using namespace std;
class First
{
    public:
    void print()
    {
        cout<< "Objecct delegated"<<endl;
    }
};

class Second
{
    First obj;
    public:
    void print()
    {
        obj.print();
    }
};

int main()
{
    Second obj1;
    obj1.print();
    return 0;
}
