#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int> v;
    int i;
    int n=s.size();
    for(char c:s){
        if(c=='+'){
            continue;
        }else{
            v.push_back(c - '0');
        }
    }
    sort(v.begin(),v.end());
    for(i=0;i<v.size();i++){
        cout<<v[i];
        if(i!=v.size()-1){
            cout<<"+";
        }
    }
}