#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long n;
    long long h;
    long long a;
    long long b;
    long long k;
    cin>>n;
    cin>>h;
    cin>>a;
    cin>>b;
    cin>>k;
 
    while(k--) {
 
        long long ta, fa, tb, fb;
        cin >> ta >> fa >> tb >> fb;
 
        
        if(ta == tb) {
            cout << abs(fa - fb) << endl;
            continue;
        }
 
        long long ans;
 
        
        if(fa >= a && fa <= b) {
 
            ans = abs(ta - tb) + abs(fa - fb);
 
        }
        
        else if(fa < a) {
 
            ans = (a - fa)
                  + abs(ta - tb)
                  + abs(a - fb);
 
        }
        
        else {
 
            ans = (fa - b)
                  + abs(ta - tb)
                  + abs(b - fb);
        }
 
        cout << ans << endl;
    }
}