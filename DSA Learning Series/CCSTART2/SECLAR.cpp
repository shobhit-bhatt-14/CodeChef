#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    vector<ll> ans;
    ll a, b, c;
    cin >> a >> b >> c;
    ans.push_back(a);
    ans.push_back(b);
    ans.push_back(c);
    
    sort(ans.begin() , ans.end());
    
    cout << ans[1] << "\n";
    
    return 0;
}