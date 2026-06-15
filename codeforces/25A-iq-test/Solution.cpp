#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long n;
    cin>>n;
 
    long long evenCount=0;
    long long oddCount=0;
    long long evenPos=0;
    long long oddPos=0;
 
    for(long long i=1;i<=n;i++){
        long long x;
        cin>>x;
 
        if(x%2==0){
            evenCount++;
            evenPos=i;
        }
        else{
            oddCount++;
            oddPos=i;
        }
    }
 
    if(evenCount==1){
        cout<<evenPos<<endl;
    }
    else{
        cout<<oddPos<<endl;
    }
 
    return 0;
}