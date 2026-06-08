#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long t;
    cin>>t;
 
    while(t--){
 
        long long n,m;
        cin>>n>>m;
 
        vector<long long> used(n+1,0);
 
        long long i;
 
        for(i=0;i<m;i++){
 
            long long a,b,c;
            cin>>a>>b>>c;
 
            used[b]=1;
        }
 
        long long root=1;
 
        for(i=1;i<=n;i++){
 
            if(used[i]==0){
                root=i;
                break;
            }
        }
 
        for(i=1;i<=n;i++){
 
            if(i!=root){
                cout<<root<<" "<<i<<endl;
            }
        }
    }
}