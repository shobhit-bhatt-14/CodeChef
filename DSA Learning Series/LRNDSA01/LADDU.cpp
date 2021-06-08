#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--){
        ll act , laddus=0;
        string origin;
        cin >> act >> origin;
        while(act--) {
            string ch;
            cin >> ch;
            
            if(ch == "CONTEST_WON") {
                ll rank;
                cin >> rank;
                if(rank>20) rank=20;
                laddus += 320-rank;
            }
            
            else if(ch == "TOP_CONTRIBUTOR")
                laddus += 300;
                
            else if(ch == "BUG_FOUND") {
                ll severity;
                cin >> severity;
                laddus += severity;
            }
            
            else if(ch == "CONTEST_HOSTED")
                laddus += 50;
        }
        
        if(origin == "INDIAN")
            cout << laddus/200 << "\n";
        else
            cout << laddus/400 << "\n";
    }
    
    return 0;
}