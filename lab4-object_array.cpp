
#include <iostream>
using namespace std;
class employee
{
public:
    char name [20];
    float age;
    int id;
    void getdata ();
    void putdata ();
};
void employee :: getdata ()
{
    cin >> name;
    cin >> age;
    cin >> id;
}
void employee :: putdata ()
{
    cout << name << " " << age << " " << id << endl;
}
int size = 3;
int main ()
{
    employee manager [size];
    for (int i = 0 ; i < size ; i ++)
    {
        manager [i].getdata ();
    }
    for (int i = 0 ; i < size ; i ++)
    {
        manager [i].putdata ();
    }
    return 0;
}
