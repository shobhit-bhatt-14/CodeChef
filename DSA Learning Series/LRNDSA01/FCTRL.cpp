#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--){
        ll n , count=0;
        cin >> n;
        
        for(ll i=5 ; n/i>0 ; i*=5)
            count += n/i;
        
        cout << count << "\n";
    }
    
    return 0;
}