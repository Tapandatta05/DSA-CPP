//leetcode 766
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
  
   
    int arr[a][b];
    int sum=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
           
        }
    }
    bool flag=true;
    for(int i=0;i<a-1;i++){
        for(int j=0;j<b-1;j++){
            if(arr[i][j]!=arr[i+1][j+1]){
                flag=false;
            }
        }
    }
    if(flag==true){
        cout<<true;
    }
    else{
        cout<<false;
    }
    
}