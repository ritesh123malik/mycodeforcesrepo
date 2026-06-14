#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long n,m;
    cin>>n>>m;
 
    vector<long long> v(m);
 
    long long i;
    for(i=0;i<m;i++){
        cin>>v[i];
    }
 
    sort(v.begin(),v.end());
 
    long long ans=INT_MAX;
 
    for(i=0;i+n-1<m;i++){
        long long diff=v[i+n-1]-v[i];
        ans=min(ans,diff);
    }
 
    cout<<ans<<endl;
 
    return 0;
}