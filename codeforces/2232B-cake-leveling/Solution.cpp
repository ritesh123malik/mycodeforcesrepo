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
 
        vector<long long> ans;
        long long sum=0;
        long long best=a[0];
 
        for(i=0;i<n;i++){
            sum+=a[i];
            best=min(best,sum/(i+1));
            ans.push_back(best);
        }
 
        for(i=0;i<n;i++){
            cout<<ans[i];
            if(i!=n-1){
                cout<<" ";
            }
        }
        cout<<"\n";
    }
 
    return 0;
}