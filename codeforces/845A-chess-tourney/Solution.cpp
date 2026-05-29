#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[2*n];
    int i;
    for(i=0;i<2*n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+2*n);
    
   if(arr[n-1]<arr[n]){
       cout<<"YES\n";
   }else{
       cout<<"NO\n";
   }
}