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
   int m;
   int n;
   cin>>m;
   cin>>n;
   int i;
   vector<int> v;
   for(int i=2;i<=m;i++){
       if(checkprime(i)){
           v.push_back(i);
       }
   }
   int count=0;
   int n1=v.size();
   for(int i=0;i+1<n1;i++){
       int x=v[i]+v[i+1]+1;
           if(checkprime(x)&&x<=m){
               count++;
           }
       
   }
   if(count>=n){
       cout<<"YES"<<endl;
   }else{
       cout<<"NO"<<endl;
   }
   
}