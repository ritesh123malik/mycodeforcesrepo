#include<bits/stdc++.h>
using namespace std;
 
 
int isprime(long long n){
 
    if(n < 2) return 0;
 
    for(long long i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
 
    return 1;
}
 
 
 
int main(){
    long long n;
    cin>>n;
    int i;
    int count=0;
    int count2=0;
    int j=0;
    for(i=1;i<=n;i++){
        count=0;
    for(j=2;j<=i;j++){
        if(isprime(j)==1 && i%j==0){
            count++;
        }
    }
    if (count==2){
        count2++;
    }
    }
    
    cout<<count2<<endl;
    
}