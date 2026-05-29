#include<bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    int k;
 
    cin >> n >> k;
 
    int count2 = 0;
    int count5 = 0;
 
    long long temp = n;
 
    while(temp % 2 == 0) {
        count2++;
        temp /= 2;
    }
 
    while(temp % 5 == 0) {
        count5++;
        temp /= 5;
    }
 
    while(count2 < k) {
        n *= 2;
        count2++;
    }
 
    while(count5 < k) {
        n *= 5;
        count5++;
    }
 
    cout << n;
}