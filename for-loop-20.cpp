#include<iostream>
using namespace std;
int main(){
    int a=12,b=18;
    int lcm;
    for(int i = max (a,b) ;; i++){
        if(i % a == 0 && i % b == 0){
            lcm = i;
            break;
        }
    }
    cout << " LCM : " << lcm << endl;
    return 0;
}