#include<iostream>
using namespace std;
int main(){
    int num=1234;
    int sum=0;
    for(;num>0;num=num/10){
        sum+=num%10;
    }
    cout<<"sum of digits:"<<sum<<endl;
    return 0;
}