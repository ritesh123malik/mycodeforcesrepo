#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,q;
    cin>>n>>q;
 
    vector<long long> arr(n);
 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 
    vector<long long> freq(n+1,0);
 
    while(q--){
        int l,r;
        cin>>l>>r;
 
        l--;
        r--;
 
        freq[l]++;
 
        if(r+1<n){
            freq[r+1]--;
        }
    }
 
    for(int i=1;i<n;i++){
        freq[i]+=freq[i-1];
    }
 
    freq.pop_back();
 
    sort(arr.begin(),arr.end());
    sort(freq.begin(),freq.end());
 
    long long ans=0;
 
    for(int i=0;i<n;i++){
        ans+=arr[i]*freq[i];
    }
 
    cout<<ans;
}