#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(n==2){
            if(arr[0]>=arr[1]){
                cout<<arr[0]<<" "<<arr[1]<<endl;
            }
            else{
                cout<<arr[1]<<" "<<arr[0]<<endl;
            }
            continue;
        }
        sort(arr.begin(),arr.end(),greater<long long>());
        int flag=1;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                flag=0;
                break;
            }
        }
        for(int i=0;i<n-2 && flag;i++){
            if(arr[i]%arr[i+1]!=arr[i+2]){
                flag=0;
                break;
            }
        }
        if(flag){
            cout<<arr[0]<<" "<<arr[1]<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
 
    return 0;
}