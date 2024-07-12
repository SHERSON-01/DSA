#include<iostream>
#include<vector>
using namespace std;
void sorto1(vector<int>& v){
    int n = v.size();
    int no0 = 0;
    int no1 = 0;
    for(int i=0;i<=n;i++){
        if(v[i]==0)no0++;
        else no1++;
        for(int i=0;i<n;i++){
            if(i<no0)v[i]=0;
            else v[i]=1;
        }
    }
}
void sortm2(vector<int>& v){
    int n = v.size();
    int i = 0;
    int j = n-1;
    while(i<j){
        if(v[i]<0) i++;
        if(v[j]>0) j--;
        if(i>j) break;
        if(v[i]>0 && v[j]<0){
            int temp = v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
    }
}
    int main(){
            vector<int> v;
    v.push_back(1);
    v.push_back(-2);
    v.push_back(-6);
    v.push_back(4);
    v.push_back(8);
    v.push_back(-3);
    v.push_back(6);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sortm2(v);
        for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    }
