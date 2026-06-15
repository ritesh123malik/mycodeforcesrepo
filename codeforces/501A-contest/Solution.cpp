#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    int d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    int val1=max(3*a/10,a-a*c/250);
    int val2=max(3*b/10,b-b*d/250);
    if(val1>val2){
        cout<<"Misha"<<endl;
    }else if(val2>val1){
        cout<<"Vasya"<<endl;
    }else{
        cout<<"Tie"<<endl;
    }
}