#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        long long b[n];
        int i,j;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            cin>>b[i];
        }
        int used[n];
        for(i=0;i<n;i++){
            used[i]=0;
        }
        vector<int> pos;
        bool check=true;
        for(i=0;i<n;i++){
            int idx=-1;
            for(j=0;j<n;j++){
                if(used[j]==0 && a[j]<=b[i]){
                    idx=j;
                    break;
                }
            }
            if(idx==-1){
                check=false;
                break;
            }
            used[idx]=1;
            pos.push_back(idx);
        }
        if(check==false){
            cout<<-1<<endl;
            continue;
        }
        long long count=0;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(pos[i]>pos[j]){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
 
    
}