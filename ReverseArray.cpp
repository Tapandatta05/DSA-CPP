#include<iostream>
using namespace std;
int main(){
    int arr[6]={10,20,30,40,50,60};
    int i=0;
    int j=3;
    while(i<j){
        swap(i,j);
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    //MTD-2;
while(i<j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
}
cout<<endl;
for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}