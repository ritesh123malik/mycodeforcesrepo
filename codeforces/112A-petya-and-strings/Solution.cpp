#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    string b;
    cin>>b;
    transform(a.begin(),a.end(),a.begin(),::tolower);
    transform(b.begin(),b.end(),b.begin(),::tolower);
    int i;
    int n=a.size();
    int t=a.compare(b);
    if(t==0){
        cout<<"0";
    }else if(t<0){
        cout<<"-1";
    }else if(t>0){
        cout<<"1";
    }
}