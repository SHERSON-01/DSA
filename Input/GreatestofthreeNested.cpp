#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    cout<<"Enter 3rd number: ";
    cin>>c;
    if(a>c){
        if(a>b){
            cout<<a<< " Is greatest";
        }
        else {
            cout<<c<< " Is greatest";
        }
    }
    else{
        if(b>c){
            cout<<b<< " Is greatest";
        }
        else {
            cout<<c<<" Is greatest";
        }
    }
}