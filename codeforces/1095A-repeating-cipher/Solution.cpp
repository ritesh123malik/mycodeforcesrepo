#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n;
    cin >> n;
 
    string t;
    cin >> t;
 
    int i = 0;
    int step = 1;
 
    while(i < n){
 
        cout << t[i];
 
        i += step;
 
        step++;
    }
}