#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int x=a-b;
    try
    {
        if(x!=0)
        {
            cout<<"result (a/x) = "<<a/x<<endl;
        }
        else
            throw(x);
    }
    catch(int i)
    {
        cout<< "Exception caught: DIVIDE BY ZERO\n";
    }
    cout<< "END";
    return 0;
}
