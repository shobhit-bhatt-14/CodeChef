#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t , days , dis , pa , pb , pc , da=10 , db=21 , dc=42;
    cin >> t;
    while(t-->0) {
        cin >> days >> dis >> pa >> pb >> pc;
        dis *= days;
        
        if(dis >= 42)
            cout << pc << "\n";
        else if(dis >=21)
            cout << pb << "\n";
        else if(dis >=10)
            cout << pa << "\n";
        else
            cout << "0\n";
    }
    
    return 0;
}