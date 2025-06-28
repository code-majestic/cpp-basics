// question no. 16
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 17; j++)
        {
            if (i == 1 && j == 9)
            {
                cout << 1;
            }
            else if (i == 2 && (j == 8 || j == 10))
            {
                cout << 2;
            }
            else if (i == 3 && (j == 7 || j == 9 || j == 11))
            {
                cout << 3;
            }
            else if (i == 4 && (j == 6 || j == 8 || j == 10 || j == 12))
            {
                cout << 4;
            }
            else if (i == 5 && (j == 5 || j == 7 || j == 9 || j == 11 || j == 13))
            {
                cout << 5;
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}
