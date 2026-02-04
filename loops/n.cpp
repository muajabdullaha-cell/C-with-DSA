
#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 15; i++) {          // outer loop
        cout << "Class " << i << endl;

        for(int j = 1; j <= 50; j++) {      // inner loop
            cout << "  Student " << j << endl;
        }
    }
    return 0;
}
// nosted loops