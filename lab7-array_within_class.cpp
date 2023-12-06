#include<iostream>
using namespace std;
class student
{
    string name;
    int roll;
    float mark[5];
    public:
    void get_data();
    void put_data();
};
void student::get_data()
{
    cout<< "Enter name: ";
    cin>>name;
    cout<< "Enter Roll: ";
    cin>>roll;
    for(int i = 0 ; i < 5 ; i++)
    {
        cout<< "Enter mark for subject"<<i+1<< ": ";
        cin>>mark[i];
    }
}
void student::put_data()
{
    cout<< "Student name: "<<name<<endl;
    cout<< "Roll: "<<roll<<endl;
    float total=0;
    for(int i = 0 ; i < 5 ; i++)
    {
        cout<< "Mark for subject"<<i+1<< ": "<<mark[i]<<endl;
        total+=mark[i];
    }
    cout<< "Total mark: "<<total<< "\n"<< "Average mark: "<<total/5.0<<endl;
}
int main()
{
    int n;
    cout<< "Enter number of student: ";
    cin>>n;
   student obj[n];
   for(int i=0 ; i<n ; i++)
   {
       obj[i].get_data();
       cout<<endl;
   }
   cout<< "Student details"<<endl;
   for(int i=0 ; i<n ; i++)
   {
       obj[i].put_data();
       cout<<endl;
   }
}
