#include <iostream>
using namespace std;
class area
{
    public:
        float area1 (float a, float b)
        {
            return (a * b);
        }
        float area1 (int r)
        {
            return (3.14 * r * r);
        }
};
int main ()
{
    float a, b, r;
    area rectangle, circle;
    cout << "Enter 2 sides" << endl;
    cin >> a >> b;
    cout << rectangle.area1 (a, b) << endl;
    cout << "Enter radius" << endl;
    cin >> r;
    cout << circle.area1 (r) << endl;
    return 0;
}
