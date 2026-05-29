#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	string s;
	cin>>s;
	int i;
	int count1=0;
	int count2=0;
	for(i=0;i<n;i++){
	    if(s[i]=='A'){
	        count1++;
	    }
	    else if(s[i]=='D'){
	        count2++;
	    }
	}
	if(count1>count2){
	    cout<<"Anton";
	}
	else if(count2>count1){
	    cout<<"Danik";
	}
	else if(count2==count1){
	    cout<<"Friendship";
	}
 
}