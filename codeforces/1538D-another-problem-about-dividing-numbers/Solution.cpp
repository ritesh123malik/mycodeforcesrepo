#include<bits/stdc++.h>
using namespace std;
 
int primes(int n){
    int count=0;
    int i;
    for(i=2;i*i<=n;i++){
        while(n%i==0){
            count++;
            n=n/i;
        }
    }
    if(n>1)count++;
    return count;
}
 
 
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        int b;
        int k;
        cin>>a;
        cin>>b;
        bool ok=0;
        cin>>k;
        int c1=primes(a);
        int c2=primes(b);
        if(c1+c2>=k){
            ok=1;
        }else{
            ok=0;
        }
        if(k==1){
            if(a!=b&&(a%b==0||b%a==0)){
                ok=1;
            }else{
                ok=0;
            }
        }
        if(ok==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
}