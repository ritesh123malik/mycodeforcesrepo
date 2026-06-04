#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int i;
        int temp1=0;
        int diff=0;
        int temp2=0;
        int mini=INT_MAX;
        bool ok=1;
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        for(i=0;i<n-1;i++){
            ok=1;
            diff=min(arr[i+1],arr[i]);
            temp1=arr[i+1]-diff;
            temp2=arr[i]-diff;
            if(temp1>=temp2){
                arr[i+1]=temp1;
                arr[i]=temp2;
            }
            else{
              
                ok=0;
                break;
            }
        }
        if(ok==0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
        
    }
}