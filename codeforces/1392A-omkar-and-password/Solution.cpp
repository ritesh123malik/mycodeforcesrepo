#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool same=true;
        int i;
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
            
        }
        for(i=0;i<n;i++){
            if(arr[i]!=arr[0]){
                same=false;
                break;
            }
        }
        if(same==true){
            cout<<n<<endl;
        }else{
            cout<<1<<endl;
        }
    }
}