#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    int n;
    int m;
    
    cin>>n;
    cin>>m;
    
    long long arr1[n];
    long long arr2[m];
    
    int i;
    
    for(i=0;i<n;i++){
        cin>>arr1[i];
    }
    
    for(i=0;i<m;i++){
        cin>>arr2[i];
    }
    
    long long ans=LLONG_MAX;
    
    for(i=0;i<n;i++){
        
        long long maxi=LLONG_MIN;
        
        for(int j=0;j<n;j++){
            
            if(i!=j){
                
                for(int k=0;k<m;k++){
                    
                    long long product=arr1[j]*arr2[k];
                    
                    maxi=max(maxi,product);
                }
            }
        }
        
        ans=min(ans,maxi);
    }
    
    cout<<ans<<endl;
    
    return 0;
}