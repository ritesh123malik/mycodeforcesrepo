#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int pos=-1;
        int i;
        for(i=0;i<n;i++){
            if(s[i]=='0'){
                pos=i;
                break;
            }
        }
        if(pos==-1){
            cout<<"1 "<<n<<" 1"<<" 1"<<endl;
            continue;
        }
        int len=n-pos;
        string target=s.substr(pos);
        string best="";
        int bestL=0;
        int j;
        for(i=0;i+len<=n;i++){
            string curr="";
            for(j=0;j<len;j++){
                if(s[i+j]==target[j]){
                    curr.push_back('0');
                }else{
                    curr.push_back('1');
                }
                
            }
            if(curr > best) {
                best = curr;
                bestL = i;
            }
        }
        cout << 1 << " " << n << " "
             << bestL + 1 << " " << bestL + len << '\n';
    
    }
}