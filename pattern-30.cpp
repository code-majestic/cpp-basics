#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= n * 2 - 1; i++)
    {
        for (int j = 1; j <= n * 2 - 1; j++)
        {
            if (j == i || j == (n * 2 - i))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}