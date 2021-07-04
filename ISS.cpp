#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll gcd(ll a, ll b) {
    if(!a)
       return b;
    
    return gcd(b%a,a);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, k;
    cin >> t;
    while(t--) {
        cin >> k;
        ll a, b, count=0;
        for(ll i=1 ; i<=2*k ; i++) {
            a = k+(i*i);
            b = k+((i+1)*(i+1));
            count += gcd(a,b);
        }
        
        cout << count << "\n";
    }
    return 0;
}