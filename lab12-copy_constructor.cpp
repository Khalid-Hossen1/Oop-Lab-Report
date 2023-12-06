#include <iostream>
using namespace std;
class member
{
    string name;
public:
    member ()
    {
    }
    member (string a)
   {
        name = a;
   }
    member (member (&x))
    {
        name = x.name;
    }
    void display ()
    {
        cout << name << endl;
    }
};
int main ()
{
    member a ("Khalid");
    member b (a);
    member c = a;
    member d;
    d=a;
    a.display ();
    b.display ();
    c.display ();
    d.display ();
    return 0;
}
