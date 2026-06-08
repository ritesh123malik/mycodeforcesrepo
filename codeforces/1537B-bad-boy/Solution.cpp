#include<bits/stdc++.h>
using namespace std;
 
long long dist(long long x1,long long y1,long long x2,long long y2){
    return abs(x1-x2)+abs(y1-y2);
}
 
int main(){
 
    long long t;
    cin>>t;
 
    while(t--){
 
        long long n,m,i,j;
        cin>>n>>m>>i>>j;
 
        vector<pair<long long,long long>> v;
 
        v.push_back({1,1});
        v.push_back({1,m});
        v.push_back({n,1});
        v.push_back({n,m});
 
        long long best=-1;
 
        pair<long long,long long> a,b;
 
        long long p,q;
 
        for(p=0;p<4;p++){
 
            for(q=p+1;q<4;q++){
 
                long long cur=
                dist(i,j,v[p].first,v[p].second)+
                dist(v[p].first,v[p].second,v[q].first,v[q].second)+
                dist(v[q].first,v[q].second,i,j);
 
                if(cur>best){
 
                    best=cur;
 
                    a=v[p];
                    b=v[q];
                }
            }
        }
 
        cout<<a.first<<" "<<a.second<<" "
            <<b.first<<" "<<b.second<<endl;
    }
}