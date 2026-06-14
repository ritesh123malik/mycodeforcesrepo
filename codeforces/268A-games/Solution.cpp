#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int h[n];
    int a[n];
    int i;
    for(i=0;i<n;i++){
        cin>>h[i];
        cin>>a[i];
    }
    int j;
    int count=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i!=j&&h[i]==a[j]){
                count++;
                
            }
        }
    }
    cout<<count<<endl;
}