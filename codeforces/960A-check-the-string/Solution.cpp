#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin>>s;
    vector<char> final;
    int i;
    int a=0;
    int b=0;
    int c=0;
    int n=s.length();
    for(i=0;i<n;i++){
        if(final.empty()||final.back()!=s[i]){
            final.push_back(s[i]);
        }
    }
    if(final.size()!=3||final[0]!='a'||final[1]!='b'||final[2]!='c'){
        cout<<"NO"<<endl;
        return 0;
    }
    for(char ch : s){
 
        if(ch == 'a') a++;
        else if(ch == 'b') b++;
        else if(ch == 'c') c++;
    }
    
    if(a==c||b==c){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}