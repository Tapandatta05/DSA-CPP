#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int nums1[m];
    int nums2[n];
    for(int i=0;i<m;i++){
        cin>>nums1[i];
    }
    for(int i=0;i<n;i++){
        cin>>nums2[i];
    }
    vector<int>v;
    for(int i=0;i<m;i++){
        v.push_back(nums1[i]);
    }
    for(int i=0;i<n;i++){
        v.push_back(nums2[i]);
    }
    sort(v.begin(),v.end());
    float x;
    int p = v.size();
    
        if(p%2==0){
          float x=v[p/2]+v[p/2-1];
          cout<<x/2;
        }
        else{
            cout<<v[p/2];
        }
    
    return 0;
}