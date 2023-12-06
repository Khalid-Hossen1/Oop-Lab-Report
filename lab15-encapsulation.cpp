#include <iostream>
using namespace std;
class student
{
private:
    double cgpa;
public:
    void set_data (double x)
    {
        cgpa = x;
    }
    double get_data ()
    {
        return cgpa;
    }
    double put_data ()
    {
        cout << cgpa <<endl;
    }
};
int main ()
{
    student s1;
    s1.set_data (3.25);
    s1.get_data ();
    s1.put_data ();
    return 0;
}
