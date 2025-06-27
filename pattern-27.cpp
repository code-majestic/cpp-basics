#include<iostream>
using namespace std;
int main(){
    int num=10;
    for(int num=1; num<=10; num++){
        for(int j=1; j<=num; j++){
            if(num==1|| num==2&&j==2 || num==3&&j==3 || num==4&&j==4)
            cout<< num;
            else
        cout<< num<<"*";//infinit loop
}
        cout<<endl;
    }
   for(int num=1; 1<=num; num++){
        for(int j=1; j<=num; j++){
            if(num==4&&j==4 || num==3&&j==3 || num==2&&j==2 || num==1)
            cout<< num;
            else
            cout<< num<<"*";
        num++;
    }
        cout<<endl; 
}
return 0;
}