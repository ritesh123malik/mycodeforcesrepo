#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long  n;
        cin>>n;
        if(n%12!=10){
            cout<<(n%12)<<" "<<(n-(n%12))<<endl;
        }
        else{
            if(n>=22){
                cout<<"22"<<" "<<(n-22)<<endl;
            }else{
                cout<<-1<<endl;
            }
        }
    }
    
}