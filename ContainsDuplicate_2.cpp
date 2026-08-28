#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        int p = i-j;
        if(p<0){
            p=j-i;
        }    
        if(arr[i]==arr[j] && p<=k){
          cout<<true;
          return 0;  
        }
        }
    }
    return false;
}