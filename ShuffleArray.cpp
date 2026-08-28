#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[2*n];
    for(int i=0;i<2*n;i++){
        cin>>arr[i];
    }
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++){
        arr1[i]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr2[i]=arr[i+n];
    }
    for(int i=0;i<2*n;i+=2){
        arr[i]=arr1[i/2];
    }
    for(int i=1;i<2*n;i+=2){
        arr[i]=arr2[i/2];
    }
    for(int i=0;i<2*n;i++){
        cout<<arr[i]<<" ";
    }
}
