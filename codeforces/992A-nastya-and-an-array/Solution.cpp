#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	int arr[n];
	int i;
	int maxcount=1;
	int count=0;
	for(i=0;i<n;i++){
	    cin>>arr[i];
	}
	sort(arr,arr+n);
	if(arr[0]!=0){
	    count++;
	}
	
	for(i=1;i<n;i++){
	    if(arr[i-1]!=arr[i] && arr[i]!=0){
	    count++;
	    
	    
	}
	
 
}
 
cout<<count;
}