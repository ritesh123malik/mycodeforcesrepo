#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int i;
    vector<int> a;
    int total=0;
    int count=0;
    for(i=0;i<n;i++){
        cin>>arr[i];
        total=total+arr[i];
    }
    sort(arr,arr+n, greater<int>());
    int sum=0;
    for(i=0;i<n;i++){
        sum=arr[i]+sum;
        count++;
        if(sum>total-sum){
            break;
        }
    }
    cout<<count;
}