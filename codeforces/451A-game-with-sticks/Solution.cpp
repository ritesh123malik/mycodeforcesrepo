#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    int m;
    cin>>n;
    cin>>m;
 
    int moves=min(n, m);
 
    if(moves%2==1) {
        cout<<"Akshat";
    }
    else{
        cout<<"Malvika";
    }
}