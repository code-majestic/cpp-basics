//              1
//           2 3 2
//         3 4 5 4 3
//       4 5 6 7 6 5 4
//     5 6 7 8 9 8 7 6 5  

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int s = 1; s <= 5 - i; s++)
        {
            cout << "  ";
        }
        int num = i;
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        num = i * 2 - 2;
        for (int j = 1; j < i; j++)
        {
            cout << num << " ";
            num--;
        }
        cout << endl;
    }
}