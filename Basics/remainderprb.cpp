#include<iostream>
using namespace std;
int main(){
    int a = 16; // a = dividend
    int b = 3; // b = divisor
    // int q = a/b; // q is quotient
    // int r; // r = remanider
    // // a = (b*q) + r
    // r = a-(b*q);
    int r = a % b; // direct formula
    cout<<r;
}