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
    sort(arr,arr+n);
    int count=0;
    for(i=0;i<n;i++){
        if(i==0&&arr[0]!=0){
            count++;
        }
        else if(arr[i-1]!=arr[i]&&arr[i]!=0){
            count++;
        }
    }
    cout<<count<<endl;
}