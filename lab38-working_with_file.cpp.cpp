#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream write("Khalid.txt");
    string name;
    cin>>name;
    write<<name<<endl;
    write.close();

    ifstream read("Khalid.txt");
    read>>name;
    cout<<name<<endl;
    read.close();
    return 0;
}
