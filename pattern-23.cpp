#include <iostream>
using namespace std;
int main()
{
    for (int i = 6; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 7 - i; k++)
        {
            if (k == 1 || (k+i)==7)
                cout << "* ";
            else
                cout << "   ";
        }
        cout << endl;
    }
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= 7 - i; k++)
        {
            if (k == 1 || (k+i)==7)
                cout << "* ";
            else
                cout << "   ";
        }
        cout << endl;
    }

    return 0;
}
