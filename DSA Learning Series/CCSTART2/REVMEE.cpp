#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll n, x;
    cin >> n;
    std::vector<ll> res;
    
    while(n--) {
        cin >> x;
        res.push_back(x);
    }
    
    reverse(res.begin(), res.end());
    
    for(ll i : res)
        cout << i << " ";
    
    return 0;
}