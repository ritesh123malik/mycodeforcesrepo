#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int x1;
    int y1;
    int x2;
    int y2;
 
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
 
    int diff1 = abs(x2 - x1);
    int diff2 = abs(y2 - y1);
 
    if(diff1 == 0 && diff2 != 0){
        cout << x1 + diff2 << " " << y1 << " "
             << x2 + diff2 << " " << y2 << endl;
    }
    else if(diff1 != 0 && diff2 == 0){
        cout << x1 << " " << y1 + diff1 << " "
             << x2 << " " << y2 + diff1 << endl;
    }
    else if(diff1 == diff2){
        cout << x1 << " " << y2 << " "
             << x2 << " " << y1 << endl;
    }
    else{
        cout << -1 << endl;
    }
 
    return 0;
}