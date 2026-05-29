#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	int n;
	int k;
	cin>>n;
	cin>>k;
	int p=0;
	int arr[n];
	int i;
	for(i=0;i<n;i++){
	    cin>>arr[i];
	}
	
    
	if(k>1){
	    p=1;
	}
	else if(k==1){
	    p=1;
	    for(i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            p=0;
            break;
        }
    }
	}
	if(p==1){
	    cout<<"YES\n";
	}
	else{
	    cout<<"NO\n";
	}
}
}