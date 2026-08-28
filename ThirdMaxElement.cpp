#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"size of arry: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long max=LLONG_MIN;
    
    for(int i=0;i<n;i++){
        if(max<arr[i])
        max=arr[i];

    }
    long long smax=LLONG_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=max && smax<arr[i]){
    smax=arr[i];
        }
    }
        long long  tmax=LLONG_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]!=max && arr[i]!=smax && tmax<arr[i]){
                tmax=arr[i];
            }
        }
        if(tmax != LLONG_MIN){
    cout << tmax << " is third largest element in array";
}
else{
    cout<<max;
}

}
