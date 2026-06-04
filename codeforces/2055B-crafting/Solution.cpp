#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
 
        long long arr1[n];
        long long arr2[n];
 
        int i;
 
        for(i = 0; i < n; i++) {
            cin >> arr1[i];
        }
 
        for(i = 0; i < n; i++) {
            cin >> arr2[i];
        }
 
        int pos = -1;
        bool ok = 1;
 
        for(i = 0; i < n; i++) {
            if(arr1[i] < arr2[i]) {
 
                if(pos != -1) {
                    ok = 0;
                    break;
                }
 
                pos = i;
            }
        }
 
        if(ok == 0) {
            cout << "NO" << endl;
            continue;
        }
 
        if(pos == -1) {
            cout << "YES" << endl;
            continue;
        }
 
        long long need = arr2[pos] - arr1[pos];
 
        for(i = 0; i < n; i++) {
 
            if(i == pos) {
                continue;
            }
 
            if(arr1[i] - arr2[i] < need) {
                ok = 0;
                break;
            }
        }
 
        if(ok) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}