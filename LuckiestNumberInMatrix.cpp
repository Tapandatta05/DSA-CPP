#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
      }
      int index=0;
    for(int j=0;j<n;j++){
        int max=arr[0][j];
        for(int i=0;i<m;i++){
            if(arr[i][j]>max){
            max=arr[i][j];
            index=i;
            }
        }
      }
      int min=arr[index][0];
      for(int j=0;j<n;j++){
        if(arr[index][j]<min){
            min=arr[index][j];
        }
      }
      cout<<min;
}