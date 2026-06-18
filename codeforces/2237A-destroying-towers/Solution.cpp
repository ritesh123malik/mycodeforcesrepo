#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
 
        int arr[n];
        int i;
 
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
 
        int mini=arr[0];
        long long sum=arr[0];
 
        for(i=1;i<n;i++){
            if(arr[i]>mini){
                sum=sum+mini;
            }
            else{
                sum=sum+arr[i];
            }
 
            if(arr[i]<mini){
                mini=arr[i];
            }
        }
 
        cout<<sum<<endl;
    }
}