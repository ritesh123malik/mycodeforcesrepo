#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long t;
    cin>>t;
 
    while(t--){
 
        long long n;
        cin>>n;
 
        vector<pair<long long,long long>> v;
 
        long long i;
 
        for(i=1;i<=n;i++){
 
            long long x;
            cin>>x;
 
            v.push_back({x,i});
        }
 
        sort(v.rbegin(),v.rend());
 
        vector<long long> pos(n+1);
 
        pos[0]=0;
 
        long long left=-1;
        long long right=1;
 
        long long ans=0;
 
        for(i=0;i<n;i++){
 
            if(i%2==0){
 
                pos[v[i].second]=right;
 
                ans+=2LL*v[i].first*abs(right);
 
                right++;
            }
            else{
 
                pos[v[i].second]=left;
 
                ans+=2LL*v[i].first*abs(left);
 
                left--;
            }
        }
 
        cout<<ans<<endl;
 
        cout<<0<<" ";
 
        for(i=1;i<=n;i++){
            cout<<pos[i]<<" ";
        }
 
        cout<<endl;
    }
}