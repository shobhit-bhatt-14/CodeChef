#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin >> t;
    while(t-->0) {
        ll n , m  , k , count=0;
        cin >> n >> m >> k;
        vector<ll> res;
        unordered_map<ll,ll> hash;
        while(k-->0) {
            ll x;
            cin >> x;
            hash[x]++;
        }
        for(ll i=1 ; i<=n ; i++) {
            if(hash[i] > 1) {
                count++;
                res.push_back(i);
            }
        }
        
        cout << count;
        
        for(ll x : res)
            cout << " " << x;
            
        cout << "\n";
    }
    
    return 0;
}