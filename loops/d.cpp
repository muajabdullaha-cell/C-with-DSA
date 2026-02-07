#include<iostream>
using namespace std;

//  int main () {
//     int n =4;
//     int ch='A';
//     for (int i=0;i<n;i++) {
//         for (int j=i+1;j>0;j--) {
//             cout<<ch<<" ";
//             ch=ch+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// int main () { 
//     int n=4;
//     for (int i=0;i<n;i++) {
//         char ch ='A'+i;
//         for (int j=0;j<=i;j++) {
//             cout<<ch<<" ";
//             ch--;
            
//         }
//         cout<<endl;
//     }
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