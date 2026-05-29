#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int i;
    string s;
    cin>>s;
    int count1=0;
    int count0=0;
    int n=s.length();
    for(i=0;i<n;i++){
        if(s[i]=='1'){
            count1++;
        }
        else if(s[i]=='0'){
            count0++;
        }
    }
    string t;
    int length=0;
    int temp1=0;
    int temp2=0;
    for(i=0;i<n;i++){
        if(s[i]=='0'&&count1>0){
            count1--;
            length++;
        }
        else if(s[i]=='1'&&count0>0){
            count0--;
            length++;
        }
        else{
            break;
        }
    }
    cout<<n-length<<endl;
    
    }
    return 0;
}