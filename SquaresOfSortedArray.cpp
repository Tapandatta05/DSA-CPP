#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>v;
    for(int i=0;i<n;i++){
        v.push_back(arr[i]*arr[i]);
    }  
    sort(v.begin(),v.end());  
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}