#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number n : ";
    cin>>n;
    for(int i=1; i<=(n*10); i++){
    if (i%n==0) cout<<i<<endl;
    }
}