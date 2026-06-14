#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string final;
    int i=0;
    int n=s.size();
    
    while(i<n){
        if(i + 2 < n &&s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
             if (!final.empty() && final.back() != ' '){
            final+=' ';
           
             }
            i=i+3;
        }else{
            final+=s[i];
            i++;
            
        }
    }
    cout<<final<<endl;
}