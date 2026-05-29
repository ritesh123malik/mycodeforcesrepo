#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
    int arr[4];
 
    for(int i = 0; i < 4; i++) {
        cin >> arr[i];
    }
 
    string s;
    cin >> s;
 
    int sum = 0;
 
    for(int i = 0; i < s.size(); i++) {
 
        sum += arr[s[i] - '1'];
    }
 
    cout << sum;
}