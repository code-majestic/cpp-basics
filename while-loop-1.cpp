#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int sum = 0;

    while (i <= 100) {
        if (i % 2 == 0) {
            sum += i;
        }
        i++;
    }

    cout << "Sum of even numbers from 1 to 100 is: " << sum << endl;

    return 0;
}