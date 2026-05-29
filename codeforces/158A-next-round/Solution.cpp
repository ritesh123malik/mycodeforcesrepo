#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int k;
    cin>>n;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    int val=arr[k-1];
    for(int i=0;i<n;i++){
        if(arr[i]>=val&&arr[i]>0){
            count++;
        }
    }
    cout<<count;
}