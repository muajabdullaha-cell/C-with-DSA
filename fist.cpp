#include <iostream>
using namespace std;

int main() {
    cout << !(3<5) << endl;
    cout << (3>5) << endl;
    cout << (3<=3) << endl;
    cout << (3==5) << endl;
    cout << ((3>1)||(3>1)) << endl;
    cout << ((3>1)&&(3>1)) << endl;
    cout << ((5>2)^(3>1)) << endl;
    return 0;
}
