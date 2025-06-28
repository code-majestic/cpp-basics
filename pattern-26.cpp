//*------------------------------------------------------------------
// question no. 21
//(debugging)
#include <iostream>
using namespace std;
int main(){
    int num1=1,num2=10;
    for (int i=1; i<=4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == 1 || i == 2 && j == 2 || i == 3 && j == 3 || i == 4 && j == 4){
                cout << num1;
             } else{
                cout << num1<< "*";
             }
                num1++;
        }
        cout << endl;
    }
    for (int i=1; i<=4; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            if (i == 4&& j==4 || i == 3&& j == 3 || i == 2 && j == 2 || i == 1){
                cout << num2;
            }else{
                cout << num2 << "*";
            }
                num2--;
        }
         cout<<endl;
    }
    return 0;
}