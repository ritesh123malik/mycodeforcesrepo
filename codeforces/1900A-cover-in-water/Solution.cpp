#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
 
        int dots = 0;
        bool three = false;
 
        for(int i = 0; i < n; i++) {
 
            if(s[i] == '.') {
                dots++;
            }
            else {
                dots = 0;
            }
 
            if(dots == 3) {
                three = true;
                break;
            }
        }
 
        if(three) {
            cout << 2 << endl;
        }
        else {
            int count = 0;
 
            for(int i = 0; i < n; i++) {
                if(s[i] == '.') {
                    count++;
                }
            }
 
            cout << count << endl;
        }
    }
 
    return 0;
}