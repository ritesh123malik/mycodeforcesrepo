#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int t;
    cin >> t;
 
    while(t--){
 
        int sum = 0;
 
        for(int i = 0; i < 10; i++){
 
            string s;
            cin >> s;
 
            for(int j = 0; j < 10; j++){
 
                if(s[j] == 'X'){
 
                    int score = min({i, j, 9-i, 9-j}) + 1;
 
                    sum += score;
                }
            }
        }
 
        cout << sum << endl;
    }
}