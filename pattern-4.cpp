#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=3; i++){
    for(int j=1; j<=3; j++){
        if((i+j)==4){
            cout<<"@";
        }else{
            cout<<"*";
        }
        }
        cout<<endl;
        }
        return 0;
}