#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--){
        ll g;
        cin >> g;
        while(g--) {
            ll i , n , q , count=0;
            cin >> i >> n >> q;
            
            if(n&1 && i!=q)
                cout << (n+1)/2 << "\n";
            else
                cout << n/2 << "\n";
        }
    }
    
    return 0;
}