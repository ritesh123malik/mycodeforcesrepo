#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n%2==0){
        cout<<"NO\n";
        return 0;
    }
    else if(arr[0]%2!=0 && arr[n-1]%2!=0){
        cout<<"YES\n";
        return 0;
    }
    else{
        cout<<"NO\n";
    }
}