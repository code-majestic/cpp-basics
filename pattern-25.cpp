//*--------------------------------------------------
// question no. 20
#include <iostream>
using namespace std;
int main()
{
    for (int i = 3; i <= 6; i++)
    {
        for (int j = 3; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    for (int i = 5; i >= 3; i--)
    {
        for (int j = 3; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}