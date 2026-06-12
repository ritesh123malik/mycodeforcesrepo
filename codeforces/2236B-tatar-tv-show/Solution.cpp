#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
 
    while(t--){
        long long n;
        long long k;
        cin>>n>>k;
 
        string s;
        cin>>s;
 
        long long flag=0;
 
        for(long long i=0;i<k;i++){
            long long cnt=0;
 
            for(long long j=i;j<n;j=j+k){
                if(s[j]=='1'){
                    cnt++;
                }
            }
 
            if(cnt%2!=0){
                flag=1;
                break;
            }
        }
 
        if(flag==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
 
   
}