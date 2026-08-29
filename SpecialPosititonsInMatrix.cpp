#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        int count =0;
        int row;
        int col;
        for(int j=0;j<n;j++){
            if(arr[i][j]==1){
                count++;
                col=j;
            }
        }
        if(count == 1){
            row=i;
        
        int count1=0;
        for(int k=0;k<m;k++){
            
            if(arr[k][col]==1){
                count1++;
            }
        }
        if(count1==1){
            cout<<"true";
            return 0;
        }

    } 
    }
    cout<<"false";

}