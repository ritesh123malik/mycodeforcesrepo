#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
 
    while(t--){
 
        long long n;
        cin>>n;
 
        vector<long long> r(n);
 
        long long i;
 
        for(i=0;i<n;i++){
            cin>>r[i];
        }
 
        long long pref=0;
        long long mxr=0;
 
        for(i=0;i<n;i++){
            pref=pref+r[i];
            mxr=max(mxr,pref);
        }
 
        long long m;
        cin>>m;
 
        vector<long long> b(m);
 
        for(i=0;i<m;i++){
            cin>>b[i];
        }
 
        pref=0;
        long long mxb=0;
 
        for(i=0;i<m;i++){
            pref=pref+b[i];
            mxb=max(mxb,pref);
        }
 
        cout<<mxr+mxb<<endl;
    }
}