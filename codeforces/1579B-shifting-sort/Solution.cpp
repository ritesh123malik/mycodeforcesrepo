#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long t;
    cin>>t;
 
    while(t--){
 
        long long n;
        cin>>n;
 
        vector<long long> v(n);
 
        long long i,j;
 
        for(i=0;i<n;i++){
            cin>>v[i];
        }
 
        vector<vector<long long>> ans;
 
        for(i=0;i<n;i++){
 
            long long pos=i;
 
            for(j=i;j<n;j++){
 
                if(v[j]<v[pos]){
                    pos=j;
                }
            }
 
            if(pos==i){
                continue;
            }
 
            vector<long long> temp;
 
            for(j=pos;j>i;j--){
                swap(v[j],v[j-1]);
            }
 
            ans.push_back({i+1,pos+1,pos-i});
        }
 
        cout<<ans.size()<<endl;
 
        for(auto x:ans){
            cout<<x[0]<<" "<<x[1]<<" "<<x[2]<<endl;
        }
    }
}