#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long t;
    cin>>t;
 
    vector<long long> pref(300005,0);
 
    long long i;
 
    for(i=1;i<300005;i++){
        pref[i]=pref[i-1]^(i-1);
    }
 
    while(t--){
 
        long long a,b;
        cin>>a>>b;
 
        long long x=pref[a];
 
        if(x==b){
            cout<<a<<endl;
        }
        else if((x^b)==a){
            cout<<a+2<<endl;
        }
        else{
            cout<<a+1<<endl;
        }
    }
}