#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long n;
    cin>>n;
 
    map<long long,long long> mp;
 
    long long i;
    for(i=0;i<n;i++){
        long long l,r;
        cin>>l>>r;
 
        mp[l]++;
        mp[r+1]--;
    }
 
    vector<long long> ans(n+1,0);
 
    long long count=0;
    long long prev=-1;
 
    for(auto it:mp){
 
        long long x=it.first;
 
        if(prev!=-1){
            ans[count]=ans[count]+(x-prev);
        }
 
        count=count+it.second;
        prev=x;
    }
 
    for(i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
 
    cout<<endl;
}