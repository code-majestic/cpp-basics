#include <iostream>
using namespace std;
int main()
{
    for (int i = 5; i >= 1; i -= 2)
    {
        for (int s = 1; s <= (5 - i); s++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 3; i <= 5; i += 2)
    {
        for (int s = 1; s <= (5 - i); s++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}