#include<iostream>
using namespace std;
int main() {
    int num = 29;
    bool isPrime = true;
    if(num<2)isPrime = false;
    for(int i=2;i<=num/2;i++){
        if(num % i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime)
    cout << num <<"is a Prime Number";
    else
    cout << num <<"is NOT a Prime Number";
    return 0;
}