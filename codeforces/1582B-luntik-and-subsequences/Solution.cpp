#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long t;
    cin>>t;
 
    while(t--){
 
        long long n;
        cin>>n;
 
        long long zero=0;
        long long one=0;
 
        long long i;
 
        for(i=0;i<n;i++){
 
            long long x;
            cin>>x;
 
            if(x==0){
                zero++;
            }
 
            if(x==1){
                one++;
            }
        }
 
        long long ans=(1LL<<zero)*one;
 
        cout<<ans<<endl;
    }
}