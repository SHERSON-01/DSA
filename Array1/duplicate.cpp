#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the Size of Array: ";
    cin>>n;
    int arr[n];
    for(i=0;i<=n-1;i++){
        cout<<"Enter the value "<<i<<" ";
        cin>>arr[i];
    }
    int check = arr[0];
    for(i=0;i<=n-1;i++){
        if (check == arr[i]) 
        cout<<"Duplicate"<<i;
        check = arr[i];
    }
}