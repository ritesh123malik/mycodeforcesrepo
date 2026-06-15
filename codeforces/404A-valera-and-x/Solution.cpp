#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
 
    vector<string> a(n);
 
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
 
    char diag=a[0][0];
    char other=a[0][1];
 
    if(diag==other){
        cout<<"NO"<<endl;
        return 0;
    }
 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
 
            if(i==j || i+j==n-1){
                if(a[i][j]!=diag){
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
            else{
                if(a[i][j]!=other){
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
 
        }
    }
 
    cout<<"YES"<<endl;
 
    return 0;
}