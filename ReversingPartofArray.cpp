#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={10,20,30,40,50,60};
    int i=1,j=arr.size() - 2;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}