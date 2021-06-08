#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--){
        ll k , d0 , d1;
        cin >> k >> d0 >> d1;
        
        ll sum = d0+d1;
        ll d = (d0+d1)%10;
        ll ch = (k-3)/4;
        
        if(k>2) {
            sum += (d+(ch*20));
            
            if(( (k-3)-(ch*4) ) == 1)
                sum += (2*d)%10;
                
            else if(( (k-3)-(ch*4) ) == 2)
                sum += ( (2*d)%10 + (4*d)%10 );
                
            else if(( (k-3)-(ch*4) ) == 3)
                sum += ( (2*d)%10 + (4*d)%10 + (8*d)%10 );
        }

        if(sum%3 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}