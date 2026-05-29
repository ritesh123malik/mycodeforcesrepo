#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    int j;
    int final;
    int row=0;
    int column=0;
    int arr[5][5];
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                 row=i;
                 column=j;
            }
        }
    }
    final=abs(row-2)+abs(column-2);
    cout<<final;
    
}