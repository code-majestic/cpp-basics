#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i<=5; i++)
    {
        for (int j = 1; j <=5-i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k << " ";
        }
        for (int k = i - 1; k >= 1; k--)
        {
            cout << k << " ";
        }
        cout << endl;
    }
}