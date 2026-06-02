#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m;
        int n;
        cin>>m;
        cin>>n;
        int final=min({m,n,(m+n)/3});
        cout<<final<<endl;
        
    }
    
}