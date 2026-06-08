#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
 
    while(t--){
 
        long long n;
        cin>>n;
 
        long long sum=0;
 
        long long i;
        for(i=0;i<n;i++){
            long long x;
            cin>>x;
            sum=sum+x;
        }
 
        long long rem=sum%n;
 
        cout<<rem*(n-rem)<<endl;
    }
}