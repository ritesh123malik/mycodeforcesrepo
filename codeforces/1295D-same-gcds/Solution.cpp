#include<bits/stdc++.h>
using namespace std;
 
long long  phi(long long n){
    long long count=n;
    long long i;
    for(i=2;i*i<=n;i++){
        if(n%i==0){
 
            while(n%i==0){
                n=n/i;
            }
 
            count=count-count/i;
        }
    }
 
    if(n>1){
        count=count-count/n;
    }
 
    return count;
}
 
 
 
 
 
 
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long a;
        cin>>a;
        long long m;
        cin>>m;
        long long temp=gcd(a,m);
        cout<<phi(m/temp)<<endl;
        
    }
}