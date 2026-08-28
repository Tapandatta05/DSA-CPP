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
    int m,n;
    cin>>m;
    cin>>n;
    int arr1[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){

            cin>>arr1[i][j];
        }
    }
    if(b!=m){
        cout<<"multiplication not possible";
        return 0; 
    }
    int arr2[a][n];
    for(int i=0;i<a;i++){
        for(int j=0;j<n;j++){
            arr2[i][j]=0;
            for(int k=0;k<b;k++){
                arr2[i][j]+=arr[i][k]*arr1[k][j];
            }
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
}