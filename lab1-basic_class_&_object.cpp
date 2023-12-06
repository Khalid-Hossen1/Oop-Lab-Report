#include<iostream>
using namespace std;
class student
{
    string name;
    int roll;
    float result;
public:
    void func(string name,int roll,float result)
    {
        this->name=name;
        this->roll=roll;
        this->result=result;
    }
    void display()
    {
        cout<< "Student name: "<<name<< "\nRoll: "<<roll<< "\nResult: "<<result<<endl;
    }
};
int main()
{
    student obj1;
    obj1.func("Khalid",220133,3.49);
    obj1.display();
    return 0;
}
