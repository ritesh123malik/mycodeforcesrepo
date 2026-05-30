#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
 
        vector<long long> a(n);
        int i;
 
        for(i=0;i<n;i++){
            cin>>a[i];
        }
 
        vector<long long> s=a;
        sort(s.begin(),s.end());
 
        int ans=n;
        set<long long> seen;
 
        for(i=0;i<n;i++){
            if(seen.find(a[i])!=seen.end()){
                continue;
            }
 
            seen.insert(a[i]);
 
            int l=lower_bound(s.begin(),s.end(),a[i])-s.begin();
            int r=n-(upper_bound(s.begin(),s.end(),a[i])-s.begin());
 
            ans=min(ans,max(l,r));
        }
 
        cout<<ans<<"\n";
    }
 
    return 0;
}