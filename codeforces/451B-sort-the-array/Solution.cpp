#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr1(n);
    vector<int> arr2(n);
    int left=0;
    int right=n-1;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    arr2=arr1;
    sort(arr2.begin(),arr2.end());
    while(left<n&&arr1[left]==arr2[left]){
        left++;
    }
    if(left==n){
        cout<<"yes"<<endl;
        cout<<"1 1"<<endl;
        return 0;
    }
    while(right>=0&&arr1[right]==arr2[right]){
        right--;
    }
    reverse(arr1.begin()+left,arr1.begin()+right+1);
    if(arr1==arr2){
        cout<<"yes"<<endl;
        cout<<left+1<<" "<<right+1<<endl;
    }else{
        cout<<"no"<<endl;
    }
    
    
}