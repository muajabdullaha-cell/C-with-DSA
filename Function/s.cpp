#include<iostream>
using namespace std;
// // fuction defination
// int printHello(){


//     cout<< "Hello"<<endl;
//     return 3;
// }
// int main(){
//     // function call
//     int val =printHello();
//     cout<<"val="<<val<<endl;
    
//     return 0;
// 

// sum of two numbers
// double sum (double a, double b) {
//     double s=a+b;
//     return s;
// }
// int main(){
//     cout<<sum(10.5,30.5)<<endl;
//     return 0;
// }

// min of  two numbers
int minofTwo(int a, int b){
    if (a<b){
        return a;
    }
    else{
        return b;
    }
} 
int main (){
    cout <<minofTwo(10,29)<<endl;
    return 0;
}