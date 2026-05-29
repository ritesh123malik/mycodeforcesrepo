#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int i;
    int abso=INT_MAX;
    for(i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<0){
            if(abs(arr[i])<abso){
                abso=abs(arr[i]);
            }
        }
        else{
            if(arr[i]<abso){
                abso=arr[i];
            }
        }
    }
    cout<<abso<<endl;
    
    
}