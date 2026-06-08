#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long t;
    cin>>t;
 
    while(t--){
 
        long long a,b,c,m;
        cin>>a>>b>>c>>m;
 
        long long mx=max({a,b,c});
        long long others=a+b+c-mx;
 
        long long mn=max(0LL,mx-others-1);
 
        long long mxm=(a-1)+(b-1)+(c-1);
 
        if(m>=mn && m<=mxm){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}