#include<bits/stdc++.h>
using namespace std;
 
vector<int> mt;
vector<vector<int>> g;
vector<int> vis;
 
bool dfs(int v){
    for(int to:g[v]){
        if(vis[to]) continue;
        vis[to]=1;
 
        if(mt[to]==-1 || dfs(mt[to])){
            mt[to]=v;
            return true;
        }
    }
    return false;
}
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
 
        g.clear();
        g.resize(n+1);
 
        for(int x=1;x<=n;x++){
            int p1=x;
            int p2=n-x+1;
            int p3=(x==1?n:x-1);
 
            int d1=n+p2-p1;
            int d2=n+p3-p2;
 
            for(int p4=1;p4<=n;p4++){
                int d3=n+p4-p3;
 
                if(d3!=d1 && d3!=d2){
                    g[x].push_back(p4);
                }
            }
        }
 
        mt.assign(n+1,-1);
 
        for(int i=1;i<=n;i++){
            vis.assign(n+1,0);
            dfs(i);
        }
 
        vector<int> last(n+1);
 
        for(int i=1;i<=n;i++){
            if(mt[i]!=-1){
                last[i]=mt[i];
            }
        }
 
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
 
        for(int i=n;i>=1;i--){
            cout<<i<<" ";
        }
 
        for(int i=2;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<1<<" ";
 
        for(int i=1;i<=n;i++){
            cout<<last[i]<<" ";
        }
 
        cout<<"\n";
    }
 
    return 0;
}