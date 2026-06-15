#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long n,k;
    cin>>n>>k;
 
    long long count=0;
 
    for(long long i=0;i<n;i++){
        long long x;
        cin>>x;
 
        if(x+k<=5){
            count++;
        }
    }
 
    cout<<count/3<<endl;
 
    return 0;
}