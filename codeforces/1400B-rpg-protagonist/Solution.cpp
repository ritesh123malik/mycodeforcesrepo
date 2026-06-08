#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
 
    while(t--){
 
        long long p,f;
        cin>>p>>f;
 
        long long cnts,cntw;
        cin>>cnts>>cntw;
 
        long long s,w;
        cin>>s>>w;
 
        if(s>w){
            swap(s,w);
            swap(cnts,cntw);
        }
 
        long long ans=0;
 
        long long i;
 
        for(i=0;i<=cnts;i++){
 
            if(i*s>p){
                break;
            }
 
            long long remp=p-i*s;
 
            long long takew=min(cntw,remp/w);
 
            long long lefts=cnts-i;
            long long leftw=cntw-takew;
 
            long long takes=min(lefts,f/s);
 
            long long remf=f-takes*s;
 
            long long takewf=min(leftw,remf/w);
 
            ans=max(ans,i+takew+takes+takewf);
        }
 
        cout<<ans<<endl;
    }
}