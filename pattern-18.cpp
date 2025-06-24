#include<iostream>
using namespace std;
int main(){
    int i = 1, j;
    while(i<=5){
        j=1;
        while(j<=5){
            if (i==1 || i==5){
                cout << "*" << " ";
            }
            else {
                if (j==1 || j==5){
                    cout << "*"<< " ";
            }
            else {
                cout << " "<< " ";
            }
        }
        j++;
    }
    cout << endl;
    i++;
}
return 0;
}


