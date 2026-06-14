#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long n;
    cin>>n;
 
    if(n>=0){
        cout<<n<<endl;
        return 0;
    }
 
    long long option1=n;
    long long option2=n/10;
    long long option3=(n/100)*10+(n%10);
 
    cout<<max(option1,max(option2,option3))<<endl;
 
    return 0;
}