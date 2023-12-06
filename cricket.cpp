#include <bits/stdc++.h>
using namespace std;
int main()
{
    int totalrun = 0;
    srand(time(0));
    int target;
    target = (rand() % 25) + 1;

    cout << "~~~~~~~~ CRICKET GAME ~~~"<< "~~~~~~~" << endl;
    cout << "Target Score "<< target << "\n";

    while (1)
    {
        int player = 0;
        int system;

        if (totalrun > target)
        {
            cout << "YOU WON!"<<" your score="<< totalrun << "\n";
            exit(0);
        }
        else
        {
            system = (rand() % 6) + 1;
            cout << "Enter no. between "<< "1 to 6" << endl;
            cin >> player;
            cout << "System: " << system << endl;

            if (player == system)
            {
                cout << "OUT your score =" << totalrun<< endl;
                exit(0);
            }
            else
            {
                totalrun = totalrun + player;
            }

        }
    }
    return 0;
}
