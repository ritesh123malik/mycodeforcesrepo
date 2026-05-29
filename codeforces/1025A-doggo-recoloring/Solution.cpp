#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    sort(s.begin(),s.end());
    for(int i=1;i<n;i++){
        if(s[i-1]==s[i]){
            count++;
        }
    }
    
    if(count>=1||n==1){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}