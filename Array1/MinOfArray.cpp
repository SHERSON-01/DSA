#include<iostream>
#include<climits>
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
    int min = INT_MAX;
    for(i=0;i<=n-1;i++){
        if (min>arr[i]) min = arr[i]; 
    }
    cout<<"Minimum value is "<<min<<endl;
}

