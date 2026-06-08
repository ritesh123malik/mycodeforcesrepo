#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    int i;
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    int m;
    cin>>m;
    vector<int> juicy(m);
    for(i=0;i<m;i++){
        cin>>juicy[i];
    }
    vector<int> prefl(n);
    vector<int> prefr(n);
    prefl[0]=1;
    prefr[0]=v[0];
    for(i=1;i<n;i++){
        prefl[i]=prefr[i-1]+1;
        prefr[i]=prefr[i-1]+v[i];
    }
    int j=0;
   for(i=0;i<m;i++){
    int pos = lower_bound(prefr.begin(), prefr.end(), juicy[i]) - prefr.begin();
    cout << pos + 1 << '\n';
}
    
}