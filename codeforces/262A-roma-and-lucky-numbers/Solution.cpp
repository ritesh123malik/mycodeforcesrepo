#include <bits/stdc++.h>
using namespace std;
 
int main() {
        int n;
        cin>>n;
        int k;
        cin>>k;
        int lucky;
        int i=0;
        int count=0;
        while(n--){
            int a;
            cin>>a;
            lucky=0;
            while(a>0){
                
                if(a%10==4||a%10==7){
                    lucky++;
                }
                a=a/10;
            }
            if(lucky<=k){
                count=count+1;
            }
            
        }
        cout<<count<<endl;
        
 
}