#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;
        int arr[n];
        int i;
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        int evenc=0;
        int rem=0;
        int minrem=INT_MAX;
        for(i=0;i<n;i++){
            rem=k-arr[i]%k;
            if(rem==k){
                rem=0;
            }
            minrem=min(rem,minrem);
            if(arr[i]%2==0){
                evenc++;
            }
        }
        if(k==4){
            if(evenc==0){
                rem=2;
                minrem=min(rem,minrem);
            }
            else if(evenc==1){
                rem=1;
                minrem=min(rem,minrem);
            }
            else if(evenc>=2){
                rem=0;
                minrem=min(rem,minrem);
            }
        }
        cout<<minrem<<endl;
    }
}