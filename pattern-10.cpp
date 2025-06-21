#include<iostream>
using namespace std;
int main(){
    int num = 16;
    for(int i=4; i>=1; i--){
        for(int j=i+1; j<=4; j++){
            cout << num <<" ";
            num--;
        }
    
    
    cout << endl;
    }
return 0;
}