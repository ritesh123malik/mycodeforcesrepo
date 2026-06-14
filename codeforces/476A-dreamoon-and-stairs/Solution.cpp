#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,m;
    cin>>n>>m;
 
    int d=n/2+n%2;
 
    while(d<=n){
        if(d%m==0){
            cout<<d<<endl;
            return 0;
        }
        d++;
    }
 
    cout<<-1<<endl;
 
    return 0;
}