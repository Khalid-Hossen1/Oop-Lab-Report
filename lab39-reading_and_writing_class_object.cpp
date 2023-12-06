#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
class inventory
{
    string name;
    int code;
    float cost;
public:
    void read_data();
    void write_data();
};

void inventory :: read_data()
{
    cout<< "Enter name: ";cin>>name;
    cout<< "Enter code: ";cin>>code;
    cout<< "Enter cost: ";cin>>cost;
}

void inventory :: write_data()
{
    cout<<name<<"\t"<<code<<"\t"<<cost<<endl;
}

int main()
{
    inventory item[2];
    fstream file;

    file.open("stock.txt",ios::in | ios :: out);

    cout<< "Enter details for two items \n";

    for(int i = 0 ; i< 2; i++)
    {
        item[i].read_data();
        file.write((char*)&item[i],sizeof(item[i]));
    }

    cout<< "\n OUTPUT \n\n";
    for(int i = 0 ; i< 2; i++)
    {

        file.read((char*)&item[i],sizeof(item[i]));
        item[i].write_data();
    }

    file.close();
    return 0;
}
