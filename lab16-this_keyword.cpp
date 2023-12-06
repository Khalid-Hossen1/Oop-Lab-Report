#include <iostream>
using namespace std;
class member
{
    int x, y;
public:
    member (int x, int y)
    {
        this -> x = x;
        this -> y = y;
    }
    void display ()
    {
        cout << x << endl << y << endl;
    }
};
int main ()
{
    member Khalid (20, 30);
    Khalid.display ();
    return 0;
}
