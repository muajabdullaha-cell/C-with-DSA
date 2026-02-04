#include <iostream>
using namespace std;

int main() {
    int n =30;
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {   // odd check
            sum += i;
        }
    }

    cout << "Odd sum = " << sum << endl;
    return 0;
}
