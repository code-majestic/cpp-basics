#include<iostream>
using namespace std;
int main() {
    int n;
    int fact = 1;
    cout << "Enter the number" << endl;
    cin >> n;
    for(int i=n;i>=1;i--){
        fact = fact * 1;
    }
    cout << "the factorial of a given number is -:" << fact << endl;
}