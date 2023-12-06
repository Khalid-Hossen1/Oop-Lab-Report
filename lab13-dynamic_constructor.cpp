#include <iostream>
#include <string>
#include <string.h>
using namespace std;
class strring
{
    char *name;
    int length;
public:
        strring ()
        {
        }
        strring (char *s)
        {
            length = strlen(s);
            name = new char [length + 1];
            strcpy (name,s);
        }
        void display ()
        {
            cout << name <<endl;
        }
        void join (strring &a, strring &b);
};
void strring :: join (strring &a, strring &b)
{
    length = a.length + b.length;
    delete name;
    name = new char [length + 1];
    strcpy (name, a.name);
    strcat (name, b.name);
}
int main ()
{
    char *first = "Khalid";
    strring name1 (first), name2 ("Hosen"), name3 ("Milu"), s1, s2;
    s1.join (name1, name2);
    s2.join (s1, name3);
    name1.display ();
    name2.display ();
    name3.display ();
    s1.display ();
    s2.display ();
    return 0;
}
