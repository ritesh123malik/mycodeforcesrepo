#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
 
    while(t--){
 
        long long n;
        cin>>n;
 
        map<long long,long long> mp;
 
        bool ok=false;
 
        long long i;
 
        for(i=0;i<n;i++){
            long long x;
            cin>>x;
 
            mp[x]++;
 
            if(mp[x]>=2){
                ok=true;
            }
        }
 
        if(ok){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}