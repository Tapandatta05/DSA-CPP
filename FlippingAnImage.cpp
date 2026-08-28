#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    int arr1[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr1[i][j];  
        }
    }
    cout<<" reversed array"<<endl;
   int arr2[a][b];
    for(int i=0;i<a;i++){
        for(int j=b-1;j>=0;j--){
    arr2[i][b-j-1]=arr1[i][j];
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(arr2[i][j]==0){
                arr2[i][j]=1;
            }
            else{
                arr2[i][j]=0;
            }
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    
   
}