#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> final;
    set<int> s;
    for(i=n-1;i>=0;i--){
        if(s.count(arr[i])==0){
            s.insert(arr[i]);
            final.push_back(arr[i]);
        }
    }
    reverse(final.begin(),final.end());
    cout<<final.size()<<endl;
    for(int x:final){
        cout<<x<<" ";
    }
}