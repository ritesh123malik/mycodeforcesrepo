#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int i;
    int place=1;
    int final[n];
    int count=0;
    if(n/10==0){
        cout<<1<<endl;
        cout<<n<<endl;
    }
    else{
    while(n!=0){
        int mod=n%10;
        
        if(mod!=0){
            final[count]=mod*place;
            count++;
        }
        n=n/10;
        place=place*10;
        
    }
    
    cout<<count<<endl;
    for(int i = 0; i < count; i++){
            cout << final[i] << " ";
        }
        cout<<endl;
    }
    }
}
 
 
 
 