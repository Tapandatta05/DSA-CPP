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
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(j%2==0)
            cout<<arr[j][i]<<" ";
            else
            cout<<arr[b-j-1][i]<<" ";
        }
    }
}