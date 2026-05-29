#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rem=0;
    rem=n%10;
    int final=0;
    if(rem>5){
        final=n+(10-rem);
    }else{
        final=n-rem;
    }
    cout<<final<<endl;
}