#include<iostream>
using namespace std;
int main(){
   // for(int i=1; i<=5; i++){
     //   for(int j=1; j<=i; j++){
       //     cout <<j<<" ";
         //}
        //cout<<endl;
    //}
    //return 0;
//}

//-------------------------------------------------

//inverted half pyramid
//for(int i=5; i>=1; i--){
  //  for(int j=1; j<=i; j++){
    //    cout <<j<<" ";
    //}
    //cout <<endl;
//}
//return 0;
//}

//----------------------------------------------------

//hollo half pyramid

for(int i=1; i<=5; i++){
    for(int j=1; j<=i; j++){
        cout<<j<<" ";
    if(i==3 || j==2 || i==4 || j==3){
        cout <<" ";
    }else{
        if(j==1 || j==2 || j==3 || j==4 || j==5){
            cout<<j ;
        }
    }
    } 
    cout<<endl;
    }
    return 0;
    }


