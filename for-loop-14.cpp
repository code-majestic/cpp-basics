#include<iostream>
using namespace std;
int main(){
    int num=1234;
    int rev=0;
    for(;num>0;num=num/10){
        int digit=num%10;
        rev=rev*10+digit;
    }
    cout<<"Reversed number:"<<rev<<endl;
    return 0;
}