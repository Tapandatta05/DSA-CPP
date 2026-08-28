#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int arr[m];
    int arr1[n];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        cin>>arr1[j];
    }
    vector<int>v;
    bool flag= false;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr1[j]){
                v.push_back(arr[i]);
                
                flag= true;
            }
        }
    }
    for(int i=0;i<v.size();i++)
    if(flag==true){
        cout<<v[i];
    }
    return 0;
}