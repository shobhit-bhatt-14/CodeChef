#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

ll power(ll a, ll b) {
    ll temp=1;
    while(b) {
        if(b&1) {
            temp = (temp*a)%mod;
        }

        b /= 2;
        a = (a*a)%mod;
    }
    
    return temp;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while(t--) {
        ll n, m, x, ans;
        cin >> n >> m;

        x = power(2,n)-1;
        ans = power(x,m);

        cout << ans << "\n";
    }

    return 0;
}