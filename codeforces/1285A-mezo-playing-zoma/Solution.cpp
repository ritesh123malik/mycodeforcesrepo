#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i;
    int count1=0;
    int count2=0;
    
    for(i=0;i<n;i++){
        if(s[i]=='L'){
            count1--;
        }
        else if(s[i]=='R'){
            count2++;
        }
    }
    int final=abs(count1)+abs(count2)+1;
    cout<<final;
}