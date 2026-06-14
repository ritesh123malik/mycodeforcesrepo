#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    int j=0;
    int val=0;
    vector<int> v={4,7,44,47,74,77,444,447,477,474,744,747,777,774};
    for(i=0;i<v.size();i++){
        if(n%v[i]==0){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
   
}