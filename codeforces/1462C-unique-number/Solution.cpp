#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long t;
    cin>>t;
 
    while(t--){
 
        long long x;
        cin>>x;
 
        vector<long long> v;
 
        long long d;
 
        for(d=9;d>=1;d--){
 
            if(x>=d){
                v.push_back(d);
                x=x-d;
            }
        }
 
        if(x!=0){
            cout<<-1<<endl;
            continue;
        }
 
        reverse(v.begin(),v.end());
 
        for(long long y:v){
            cout<<y;
        }
 
        cout<<endl;
    }
}