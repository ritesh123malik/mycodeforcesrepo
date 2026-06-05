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
    vector<long long> arr(n);
    long long i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    long long root=0;
    for(i=0;i<n;i++){
        root=sqrt(arr[i]);
        if(root*root == arr[i] && isprime(root))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    
    
    
}