#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
 
    while(t--){
 
        long long n,m;
        cin>>n>>m;
 
        bool ok=false;
 
        long long i;
 
        for(i=0;i<n;i++){
 
            long long a,b,c,d;
            cin>>a>>b;
            cin>>c>>d;
 
            if(b==c){
                ok=true;
            }
        }
 
        if(m%2==0 && ok){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}