#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,x;
    cin>>n>>x;
 
    int curr=1;
    int ans=0;
 
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
 
        curr += ((l-curr)/x)*x;
 
        ans += r-curr+1;
 
        curr=r+1;
    }
 
    cout<<ans<<endl;
 
    return 0;
}