#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long t;
    cin>>t;
 
    while(t--){
 
        string s;
        cin>>s;
 
        vector<long long> cnt(26,0);
 
        for(char c:s){
            cnt[c-'a']++;
        }
 
        long long one=0;
        long long two=0;
 
        long long i;
 
        for(i=0;i<26;i++){
 
            if(cnt[i]>=2){
                two++;
            }
            else if(cnt[i]==1){
                one++;
            }
        }
 
        cout<<two+one/2<<endl;
    }
}