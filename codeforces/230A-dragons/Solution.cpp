#include<bits/stdc++.h>
using namespace std;
int main(){
    int s;
    int n;
    cin>>s;
    cin>>n;
    int i;
    vector<pair<int,int>> dragon(n);
    
    for(i=0;i<n;i++){
        cin>>dragon[i].first>>dragon[i].second;
    }
    sort(dragon.begin(),dragon.end());
    for(i=0;i<n;i++){
        if(s>dragon[i].first){
            s=s+dragon[i].second;
            
        }else{
            cout<<"NO";
            return 0;
        }
    }
    
    
    cout<<"YES";
}