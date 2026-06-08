#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long t;
    cin>>t;
 
    while(t--){
 
        long long n;
        cin>>n;
 
        vector<string> v(n-2);
 
        long long i;
 
        for(i=0;i<n-2;i++){
            cin>>v[i];
        }
 
        string ans="";
 
        ans+=v[0][0];
 
        bool done=false;
 
        for(i=0;i<n-3;i++){
 
            if(v[i][1]==v[i+1][0]){
 
                ans+=v[i][1];
            }
            else{
 
                ans+=v[i][1];
                ans+=v[i+1][0];
 
                done=true;
            }
        }
 
        ans+=v[n-3][1];
 
        if(!done){
            ans+='a';
        }
 
        cout<<ans<<endl;
    }
}