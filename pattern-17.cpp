#include<iostream>
using namespace std;
int main(){
   for(int i=1; i<=5; i++){
    for(int j=1; j<=5; j++){
         if(i==1 || i==5){
            cout << "1";
        }else{
            if(i==2){
                cout <<  "*"  ;
            }else if(i==3){
                    cout << "$" ;
                }else if(i==4){
                        cout << "@" ;
             }
        }
    }
    cout << endl;
}

    return 0;
 }