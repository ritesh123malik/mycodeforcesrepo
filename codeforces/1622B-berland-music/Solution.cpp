#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long t;
    cin>>t;
 
    while(t--){
 
        long long n;
        cin>>n;
 
        vector<long long> p(n);
 
        long long i;
 
        for(i=0;i<n;i++){
            cin>>p[i];
        }
 
        string s;
        cin>>s;
 
        vector<pair<long long,long long>> zero;
        vector<pair<long long,long long>> one;
 
        for(i=0;i<n;i++){
 
            if(s[i]=='0'){
                zero.push_back({p[i],i});
            }
            else{
                one.push_back({p[i],i});
            }
        }
 
        sort(zero.begin(),zero.end());
        sort(one.begin(),one.end());
 
        vector<long long> ans(n);
 
        long long cur=1;
 
        for(auto x:zero){
 
            ans[x.second]=cur;
            cur++;
        }
 
        for(auto x:one){
 
            ans[x.second]=cur;
            cur++;
        }
 
        for(i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
 
        cout<<endl;
    }
}