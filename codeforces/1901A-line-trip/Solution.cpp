#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n, x;
        cin >> n >> x;
 
        int arr[n];
 
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
 
        int mindist = arr[0];
 
        for(int i = 0; i < n - 1; i++){
            if(arr[i+1] - arr[i] > mindist){
                mindist = arr[i+1] - arr[i];
            }
        }
 
        if(2 * (x - arr[n-1]) > mindist){
            mindist = 2 * (x - arr[n-1]);
        }
 
        cout << mindist << endl;
    }
}