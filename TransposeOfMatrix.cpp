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
    swap(a,b);
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
           cout<<arr[j][i]<<" ";
           
        }
        cout<<endl;
    }

}