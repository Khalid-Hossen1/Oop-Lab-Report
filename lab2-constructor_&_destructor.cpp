#include<iostream>
using namespace std;
class student
{
    string name;
    int roll;
    float result;
public:
    student()
    {
      cout<< "This is constructor"<<endl;
    }
    student(string name,int roll,float result)
    {
        this->name=name;
        this->roll=roll;
        this->result=result;
    }
    ~student()
    {
        cout<< "This is destructor"<<endl;
    }
    void display()
    {
        cout<< "Student name: "<<name<< "\nRoll: "<<roll<< "\nResult: "<<result<<endl;
    }
};
int main()
{
    student obj1;
    student obj2("Khalid",220133,3.49);
    obj2.display();
    return 0;
}
