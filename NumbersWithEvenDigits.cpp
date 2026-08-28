#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count = 0;
    for(int i=0;i<n;i++){
        int count1=0;
        while(arr[i]!=0){
            arr[i]=arr[i]/10;
            count1++;
        }
        if(count1 %2 == 0){
            count++;
        }
    }
    cout<<count;
}