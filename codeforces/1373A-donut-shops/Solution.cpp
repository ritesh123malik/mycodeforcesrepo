#include<bits/stdc++.h>
using namespace std;
int main(){
        long long t;
    cin>>t;
    while(t--){
        long long a;
        long long b;
        long long c;
        cin>>a;
        cin>>b;
        cin>>c;
        if(a<c){
            cout<<1<<" ";
        }
        else{
            cout<<-1<<" ";
        }
        if(a*b>c){
            cout<<b<<endl;
        }else{
            cout<<-1<<endl;
        }
        
    }
}