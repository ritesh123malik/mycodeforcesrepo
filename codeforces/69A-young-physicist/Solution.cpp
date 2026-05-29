#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[t][3];
    for(int i=0;i<t;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    int sum1=0;
   for(int j=0;j<3;j++){
       for(int i=0;i<t;i++){
           sum1=arr[i][j]+sum1;
           
       }
       if(sum1!=0){
               cout<<"NO";
               return 0;
           }
       
   }
   cout<<"YES";
   
}