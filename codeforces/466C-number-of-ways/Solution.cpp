#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long> v(n);
    long long i;
    long long total=0;
    for(i=0;i<n;i++){
        cin>>v[i];
        total=total+v[i];
        
    }
    if(total%3!=0){
        cout<<0<<endl;
        return 0;
    }
    long long target=total/3;
    long long count=0;
    long long ans=0;
    long long pref=0;
    for(i=0;i<n-1;i++){
    pref += v[i];
 
    if(pref == 2*target){
        ans += count;
    }
 
    if(pref == target && i < n-2){
        count++;
    }
}
    cout<<ans<<endl;
}