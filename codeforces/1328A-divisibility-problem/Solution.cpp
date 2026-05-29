#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long a;
        long long b;
        cin>>a;
        cin>>b;
        long long  mod;
        long long  divi;
        long long divi2;
        mod=a%b;
        if(a%b==0){
            cout<<0<<endl;
            continue;
        }
    
        long long final=b-mod;
       
        cout<<final<<endl;
        
        
    }
}