#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a;
    long long b;
    cin>>a;
    cin>>b;
    long long arr[3];
    long long i;
    for(i=0;i<3;i++){
        cin>>arr[i];
    }
    long long  sum1=0;//for yellow 
    long long  sum2=0;//for blue
    
    sum1=arr[0]*2+arr[1]*1;
    sum2=arr[1]*1+arr[2]*3;
    long long  final1=sum1-a;
    if(final1<0){
        final1=0;
    }
    long long final2=sum2-b;
    if(final2<0){
        final2=0;
    }
    long long final=abs(final1)+abs(final2);
    cout<<final<<endl;
  
}