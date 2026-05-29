#include <bits/stdc++.h>
using namespace std;
 
bool check(string s,string x){
    if(x.size()<s.size()){
        return false;
    }
    for(int i=0;i<=x.size()-s.size();i++){
        if(x.substr(i,s.size())==s)
        {
            return true;
        }
    }
    return false;
    
}
 
 
 
 
 
 
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        int x;
        cin>>n;
        cin>>x;
        string a;
        string b;
        cin>>a;
        cin>>b;
        string x0=a;
        string x1=a+a;
        string x2=x1+x1;
        string x3=x2+x2;
        string x4=x3+x3;
        string x5=x4+x4;
        long long ans=-1;
        if(check(b,a)){
            ans=0;
        }
        else if(check(b,x1)){
            ans=1;
        }
        else if(check(b,x2)){
            ans=2;
        }
        else if(check(b,x3)){
           ans=3;
        }
        else if(check(b,x4)){
            ans=4;
        }
        else if(check(b,x5)){
            ans=5;
        }
        cout<<ans<<endl;
    }
    return 0;
}