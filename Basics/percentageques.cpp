#include<iostream>
using namespace std;
int main (){
    float x1,x2,x3,x4,x5;
    cout<<"Enter the marks of s1:-";
    cin>>x1;
    cout<<"Enter the marks of s2:-";
    cin>>x2;
    cout<<"Enter the marks of s3:-";
    cin>>x3;
    cout<<"Enter the marks of s4:-";
    cin>>x4;
    cout<<"Enter the marks of s5:-";
    cin>>x5;
    float percentage = (x1+x2+x3+x4+x5)/5;
    cout<<percentage;
}
