#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin>>n;
    while(n--){
        long long t;
        cin>>t;
        long long arr[t];
        long long i;
        for(i=0;i<t;i++){
            cin>>arr[i];
        }
        long long maxi=*max_element(arr,arr+t);
        long long maxi2=*min_element(arr,arr+t);
        long long final=maxi-maxi2+1;
        cout<<final<<endl;
        
    }
 
}