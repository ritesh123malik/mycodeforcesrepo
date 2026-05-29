#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int i;
        int sum=0;
        for(i=0;i<n-1;i++){
            cin>>arr[i];
            sum=sum+arr[i];
        }
        int final=sum*-1;
        cout<<final<<endl;
    }
}