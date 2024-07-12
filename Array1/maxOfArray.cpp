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
    int max = INT_MIN;
    for(i=0;i<=n-1;i++){
        if (max<arr[i]) max = arr[i]; 
    }
    cout<<"Maximum value is "<<max<<endl;
    int smax = INT_MIN;
    for(i=0;i<=n-1;i++){
        if (arr[i]!= max && smax<arr[i]) smax = arr[i]; 
    }
    cout<<"Second Max value is "<<smax;
}
