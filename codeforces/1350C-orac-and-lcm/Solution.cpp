#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
 
    vector<long long> arr(n);
 
    int i;
 
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
 
    vector<long long> pref(n);
    vector<long long> suff(n);
 
    pref[0]=arr[0];
 
    for(i=1;i<n;i++){
        pref[i]=gcd(pref[i-1],arr[i]);
    }
 
    suff[n-1]=arr[n-1];
 
    for(i=n-2;i>=0;i--){
        suff[i]=gcd(suff[i+1],arr[i]);
    }
 
    long long ans=1;
 
    for(i=0;i<n;i++){
 
        long long temp;
 
        if(i==0){
            temp=suff[1];
        }
        else if(i==n-1){
            temp=pref[n-2];
        }
        else{
            temp=gcd(pref[i-1],suff[i+1]);
        }
 
        ans=lcm(ans,temp);
    }
 
    cout<<ans<<endl;
}