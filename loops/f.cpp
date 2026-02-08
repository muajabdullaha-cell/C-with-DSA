#include <iostream>
using namespace std;

// int main () {
//     int n =50;
//     for ( int i =2;i<=n;i=i+2) {
//         cout << i << " ";

    
//     }

//     cout << endl;
//     return 0;
// }
int main () {
    int n =4;
    for(int i=0;i<n;i++) {
        for (int j=0;j<i;j++) {
            cout<<" ";
            for (int j=0;j<n-i;j++) {
                cout<<i+1<<" ";
            }
            cout<<endl;
        }
        return 0;
    }
}