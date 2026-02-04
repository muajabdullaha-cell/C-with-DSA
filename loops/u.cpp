#include <iostream>
using namespace std;
int main () {
    int n = 20;
    int i = 1;
    int oddsum=0;
    while ( i<=n){
        
        cout << i<< " ";
        oddsum += i;
        i += 2;
    }
    cout<<"oddsum="<< oddsum<<endl;
}