#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long n,m,a,b;
    cin>>n>>m>>a>>b;
 
    long long option1=n*a;
 
    long long option2=(n/m)*b+(n%m)*a;
 
    long long option3=((n+m-1)/m)*b;
 
    long long ans=min(option1,min(option2,option3));
 
    cout<<ans<<endl;
 
    return 0;
}