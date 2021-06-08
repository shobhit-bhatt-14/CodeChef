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
        ll x , m , d , a , max;
        cin >> x >> m >> d;
        
        max = x*m;
        if(x*(m-1) > d) {
            if(x+d < max)
                max = x+d;
        }
        
        cout << max << "\n";
    }
    
    return 0;
}