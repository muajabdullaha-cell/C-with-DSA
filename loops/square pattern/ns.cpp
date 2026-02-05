
#include <iostream>
using namespace std;

// int main () { (for star print)

//     int n =5;
//     for ( int i=1;i<=n;i++) {
//         cout<<i<< " ";
//         for (int j=1;j<=n;j++) {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// int main () { (for char print)
//     int n =5;
//     for ( int i=1;i<=n;i++) {
//         cout<<i<< " ";
//         char ch='A'+i-1;
//         for (int j=1;j<=n;j++) {
//             cout<<ch<<" ";
//             ch=ch+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

int main () {
    int n =5;
    int num = 1;
    for ( int i=1;i<=n;i++) {
        cout<<i<< " ";
        for (int j=1;j<=n;j++) {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}

