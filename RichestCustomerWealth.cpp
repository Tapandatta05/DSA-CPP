#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    cin>>b;
   
    int arr[a][b];
    
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
           
        }
    }
    
    int sum[a];
    for(int i=0;i<a;i++){
        int add=0;
        for(int j=0;j<b;j++){
            add+=arr[i][j];
           sum[i]=add;
        }
    }
    int max=sum[0];
    for(int i=0;i<a;i++){
        if(max<sum[i]){
            max=sum[i];
        }
    }
    cout<<max;
}