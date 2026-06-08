#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long n,m;
    cin>>n>>m;
 
    vector<vector<long long>> a(n,vector<long long>(m));
 
    long long i,j;
 
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
 
    vector<long long> row(n,0);
    vector<long long> col(m,0);
 
    if(n<=m){
 
        for(i=0;i<n;i++){
 
            row[i]=a[i][0];
 
            for(j=1;j<m;j++){
                row[i]=min(row[i],a[i][j]);
            }
        }
 
        for(j=0;j<m;j++){
            col[j]=a[0][j]-row[0];
 
            if(col[j]<0){
                cout<<-1<<endl;
                return 0;
            }
        }
 
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
 
                if(row[i]+col[j]!=a[i][j]){
                    cout<<-1<<endl;
                    return 0;
                }
            }
        }
    }
    else{
 
        for(j=0;j<m;j++){
 
            col[j]=a[0][j];
 
            for(i=1;i<n;i++){
                col[j]=min(col[j],a[i][j]);
            }
        }
 
        for(i=0;i<n;i++){
 
            row[i]=a[i][0]-col[0];
 
            if(row[i]<0){
                cout<<-1<<endl;
                return 0;
            }
        }
 
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
 
                if(row[i]+col[j]!=a[i][j]){
                    cout<<-1<<endl;
                    return 0;
                }
            }
        }
    }
 
    long long total=0;
 
    for(i=0;i<n;i++){
        total=total+row[i];
    }
 
    for(j=0;j<m;j++){
        total=total+col[j];
    }
 
    cout<<total<<endl;
 
    for(i=0;i<n;i++){
 
        long long k;
 
        for(k=0;k<row[i];k++){
            cout<<"row "<<i+1<<endl;
        }
    }
 
    for(j=0;j<m;j++){
 
        long long k;
 
        for(k=0;k<col[j];k++){
            cout<<"col "<<j+1<<endl;
        }
    }
 
    return 0;
}