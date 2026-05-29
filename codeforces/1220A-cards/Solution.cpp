#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int final=0;
    int i;
    int count=0;
    for(i=0;i<n;i++){
        if(s[i]=='z'){
            count++;
        }
       
    }
    n=n-4*count;
    final=n/3;
    for(i=0;i<final;i++){
        cout<<"1 ";
    }
    for(i=0;i<count;i++){
        cout<<"0 ";
    }
    
}