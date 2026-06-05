#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n==0){
        cout<<1;
        return 0;
    }
    long long temp=n%4;
    if(temp==1){
        cout<<8<<endl;
    }else if(temp==2){
        cout<<4<<endl;
    }else if(temp==3){
        cout<<2<<endl;
    }else{
        cout<<6<<endl;
    }
}