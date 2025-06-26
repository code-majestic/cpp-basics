#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=4; i++){
        for(int j=1; j<=i; j++){
            if(i==1|| i==2&&j==2 || i==3&&j==3 || i==4&&j==4)
            cout<< i;
            else
        cout<< i<<"*";
    }
        cout<<endl;
    }
   for(int i=4; i>=1; i--){
        for(int j=1; j<=i; j++){
            if(i==4&&j==4 || i==3&&j==3 || i==2&&j==2 || i==1)
            cout<< i;
            else
            cout<< i<<"*";
        }
        cout<<endl; 
}
return 0;
}