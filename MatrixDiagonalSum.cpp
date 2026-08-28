#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
  
   
    int arr[a][a];
    int sum=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            cin>>arr[i][j];
           
        }
    }
    
    int arr1[a][a];
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(i==j){
                sum+=arr[i][j];
            }
        }
    }
    for(int i=0; i<a; i++){
        for(int j=0; j<a; j++){
            arr1[i][j] = arr[a-1-j][i];
        }
    }
    for(int i=0;i<a;i++){
        for(int j=a-1;j>=0;j--){
            if(i==j){
                sum+=arr1[i][j];
            }
        }
        
    }
    if(a%2!=0){
        int p=a/2;
        sum-=arr[p][p];
    }
    cout<<sum;

}