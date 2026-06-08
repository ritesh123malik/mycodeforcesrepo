#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
 
    while(t--){
 
        long long n;
        cin>>n;
 
        vector<long long> v(n);
 
        long long i;
 
        for(i=0;i<n;i++){
            cin>>v[i];
        }
 
        vector<long long> used(n,0);
 
        for(i=0;i<n;i++){
 
            long long pos=i;
 
            for(long long j=i;j<n;j++){
                if(v[j]<v[pos]){
                    pos=j;
                }
            }
 
            while(pos>i && used[pos-1]==0){
 
                swap(v[pos],v[pos-1]);
 
                used[pos-1]=1;
 
                pos--;
            }
        }
 
        for(i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
 
        cout<<endl;
    }
}