#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll n , count=00;
    cin >> n;
    vector<ll> ans;
    
    for(ll i=1 ; i<=sqrt(n) ; i++) {
        if(n%i==0) {
            if(i == n/i) {
                ans.push_back(i);
                count++;
            }
            else {
                ans.push_back(i);
                ans.push_back(n/i);
                count += 2;
            }
        }
    }
    
    sort(ans.begin() , ans.end());
    
    cout << count << "\n";
    for(ll x : ans)
        cout << x << " ";
    
    return 0;
}