#include<bits/stdc++.h>
using namespace std;
 
const long long MOD=1000000007;
 
long long fact[200005];
 
int main(){
 
    fact[0]=1;
 
    long long i;
 
    for(i=1;i<=200000;i++){
        fact[i]=(fact[i-1]*i)%MOD;
    }
 
    long long t;
    cin>>t;
 
    while(t--){
 
        long long n;
        cin>>n;
 
        vector<long long> v(n);
 
        long long x=0;
 
        for(i=0;i<n;i++){
            cin>>v[i];
 
            if(i==0){
                x=v[i];
            }
            else{
                x=x&v[i];
            }
        }
 
        long long cnt=0;
 
        for(i=0;i<n;i++){
 
            if(v[i]==x){
                cnt++;
            }
        }
 
        if(cnt<2){
            cout<<0<<endl;
            continue;
        }
 
        long long ans=(cnt*(cnt-1))%MOD;
 
        ans=(ans*fact[n-2])%MOD;
 
        cout<<ans<<endl;
    }
}