#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num=0;
    for(int i=0;i<n;i++){
        num=num*10+arr[i];
    }
    num=num+1;
    for(int i=n;i>=0;i--){
        int digits=num%10;
        arr[i]=digits;
        num=num/10;
    }

for(int i=0;i<=n;i++){
    cout<<arr[i]<<" ";
}
}