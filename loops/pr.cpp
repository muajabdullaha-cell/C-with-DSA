#include <iostream>
using namespace std;

int main() {
    int n =14;
    bool isprime = true;
    for (int i =2; i<n-1; i++) {
        if (n%i==0) {
            isprime =false;
            break;
        }
    }
    if (isprime==true) {
        cout << n<< " is prime number"<< endl;
    }
    else {
        cout << n<< " is not prime number"<< endl;
    }
    return 0;
}  