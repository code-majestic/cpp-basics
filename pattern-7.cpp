#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=4; i++){
        for(int j=1; j<=4; j++){
            if(j==2 || j==3){
                cout <<  1  ;
            }else{
                cout << " * ";
            }
            }
            cout << endl;
        }
        return 0;
    }
