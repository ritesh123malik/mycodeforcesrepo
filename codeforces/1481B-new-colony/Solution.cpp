#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long t;
    cin>>t;
 
    while(t--){
 
        long long n,k;
        cin>>n>>k;
 
        vector<long long> h(n);
 
        long long i;
 
        for(i=0;i<n;i++){
            cin>>h[i];
        }
 
        long long ans=-1;
 
        while(k--){
 
            bool found=false;
 
            for(i=0;i<n-1;i++){
 
                if(h[i]<h[i+1]){
 
                    h[i]++;
 
                    ans=i+1;
 
                    found=true;
 
                    break;
                }
            }
 
            if(!found){
                ans=-1;
                break;
            }
        }
 
        cout<<ans<<endl;
    }
}