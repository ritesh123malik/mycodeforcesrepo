#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
 
        int arr[n];
        int sum = 0;
        int odd = 0;
 
        for(int i = 0; i < n; i++){
            cin >> arr[i];
 
            sum += arr[i];
 
            if(arr[i] % 2 != 0){
                odd++;
            }
        }
 
        if(sum % 2 != 0){
            cout << "YES" << endl;
        }
        else{
            if(odd == 0 || odd == n)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
}