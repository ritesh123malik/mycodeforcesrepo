#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i;
        int arr[2*n];
        int count[n+1];
        vector<int> final;
        for(i=0;i<2*n;i++){
            cin>>arr[i];
            
        }
        for(i=0;i<=n;i++){
             count[i]=0;
        }
        for(i=0;i<2*n;i++){
            if(count[arr[i]]==0){
                count[arr[i]] = 1;
                final.push_back(arr[i]);
            }
            
        }
        for(i=0;i<final.size();i++){
            cout<<final[i]<<" ";
        }
        cout<<endl;
        
    }
}