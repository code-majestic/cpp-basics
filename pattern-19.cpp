//HOllow full pyramid
#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=6; i++){
        for(int j=1; j<=6-i; j++){
        cout <<" ";
        }
        for(int k=1; k<=i; k++){
            if(k==1 || k==i || i==6){
                cout <<"* ";
            }else{
                cout <<"  ";
            }
            }
            cout <<endl;
    }
    return 0;
}