#include <iostream>
#include <string>
using namespace std;
class name
{
    string a,b;
public:
    name (string x, string y) : a(x) , b(y) { }
    void display ()
    {
        cout << a << endl << b << endl;
    }
};
int main ()
{
    name a ("Khalid", "Hossen");
    a.display ();
    return 0;
}
