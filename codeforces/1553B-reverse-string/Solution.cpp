#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long t;
    cin>>t;
 
    while(t--){
 
        string s,tar;
        cin>>s>>tar;
 
        bool ok=false;
 
        long long n=s.size();
        long long m=tar.size();
 
        long long i,j,k;
 
        for(i=0;i<n;i++){
 
            for(j=0;j<m;j++){
 
                long long pos=i;
                bool good=true;
 
                for(k=0;k<=j;k++){
 
                    if(pos>=n || s[pos]!=tar[k]){
                        good=false;
                        break;
                    }
 
                    pos++;
                }
 
                if(!good){
                    continue;
                }
 
                pos-=2;
 
                for(k=j+1;k<m;k++){
 
                    if(pos<0 || s[pos]!=tar[k]){
                        good=false;
                        break;
                    }
 
                    pos--;
                }
 
                if(good){
                    ok=true;
                }
            }
        }
 
        if(ok){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}