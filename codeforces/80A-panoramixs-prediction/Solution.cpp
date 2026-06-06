#include<bits/stdc++.h>
using namespace std;
 
bool checkprime(int n){
    if(n < 2) return false;
 
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
 
 
 
int main(){
    int n;
    int m;
    cin>>n;
    cin>>m;
    int next=n+1;
    while(!checkprime(next)){
        next++;
    }
    if(next==m){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
   
}