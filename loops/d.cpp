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
// int main () {
//     int n =4;
//     for(int i=0;i<n;i++) {
//         for (int j=0;j<i;j++) {
//             cout<<" ";
//             for (int j=0;j<n-i;j++) {
//                 cout<<i+1<<" ";
//             }
//             cout<<endl;
//         }
//         return 0;
//     }
// }
// int main () {
//     int n=10;
//     for (int i=0;i<n;i++) {
//         for (int j=0;j<n-i-1;j++) {
//             cout<<" ";
//         }
//         for(int j=1;j<=i+1;j++) {
//             cout<<j;
//         }

//         for(int j=i;j>0;j--) { 
//             cout<<j;
//         }
//         cout<<endl;
// }
// return 0;
// } pyramid pattern
// hollo duamond pattern
// // TOP Part
int main () {
    int n =4;
    for (int i=0;i<n;i++) {
        // space
        for (int j= 0;j<n-i-1;j++) {
            cout<< " ";
        }
        cout<<"*";
        // space
        if (i!=0) {
            for ( int j=0;j<2*i-1;j++) {
                cout<<" ";
            }
            cout<< "*"; 
        }
        cout<<endl;
    }

     
    //  bottom
    for (int i =0;i<(n-1);i++) {
        // spaces
 for (int j= 0;j<i+1;j++) {
            cout<< " ";

    }
    cout<< "*";
       if(i!=n-1) {
        for ( int j=0;j<2*(n-i)-5;j++) {
                cout<<" ";
            }
            cout<<"*";
        
    }

     cout<<endl;
}
   return 0;
}

   
