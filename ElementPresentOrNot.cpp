#include<iostream>
using namespace std;
int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int x;
//     cout<<"enetr  number u wanna find: ";
//     cin>>x;
//     int arr[n];
//     for(int i=0;i<n;i++){

//         cin>>arr[i];

//     }
//    for(int i=0;i<n;i++){
//         if(x==arr[i]){
//             cout<<"number is present at index "<<i;
//             return 0;
//         }

//     }
//     cout<<"element not present";
    
int n;
    cout<<"Enter n: ";
    cin>>n;
    int x;
    cout<<"enetr  number u wanna find: ";
    cin>>x;
    int arr[n];
    for(int i=0;i<n;i++){

        cin>>arr[i];

    }
    bool flag=false;
    int i;
   for(int i=0;i<n;i++){
        if(x==arr[i]){
             flag=true;
        }

    }
    if(flag==true){
        cout<<"element present at index ";
    }
    else{
    cout<<"element not present  ";
}
}