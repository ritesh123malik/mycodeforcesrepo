#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long n,m;
    cin>>n>>m;
 
    vector<string> v(n);
 
    for(long long i=0;i<n;i++){
        cin>>v[i];
    }
 
    long long emptyRows=0;
    long long emptyCols=0;
 
    for(long long i=0;i<n;i++){
        bool found=false;
 
        for(long long j=0;j<m;j++){
            if(v[i][j]=='S'){
                found=true;
                break;
            }
        }
 
        if(!found){
            emptyRows++;
        }
    }
 
    for(long long j=0;j<m;j++){
        bool found=false;
 
        for(long long i=0;i<n;i++){
            if(v[i][j]=='S'){
                found=true;
                break;
            }
        }
 
        if(!found){
            emptyCols++;
        }
    }
 
    long long ans=emptyRows*m + emptyCols*n - emptyRows*emptyCols;
 
    cout<<ans<<endl;
 
    return 0;
}