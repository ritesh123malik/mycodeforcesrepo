#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    
    map<string,int> mp;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        mp[s]++;
    }
    int ans=0;
    for(auto x:mp){
        ans=max(ans,x.second);
    }
    cout<<ans<<endl;
}