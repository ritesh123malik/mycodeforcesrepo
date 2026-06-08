#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long n,q;
    cin>>n>>q;
 
    string s;
    cin>>s;
 
    long long cnt=0;
 
    long long i;
 
    for(i=0;i+2<n;i++){
 
        if(s.substr(i,3)=="abc"){
            cnt++;
        }
    }
 
    while(q--){
 
        long long pos;
        char c;
 
        cin>>pos>>c;
 
        pos--;
 
        for(i=max(0LL,pos-2);i<=min(n-3,pos);i++){
 
            if(s.substr(i,3)=="abc"){
                cnt--;
            }
        }
 
        s[pos]=c;
 
        for(i=max(0LL,pos-2);i<=min(n-3,pos);i++){
 
            if(s.substr(i,3)=="abc"){
                cnt++;
            }
        }
 
        cout<<cnt<<endl;
    }
}