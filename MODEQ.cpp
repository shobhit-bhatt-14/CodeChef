#include<bits/stdc++.h>
using namespace std;
typedef long long ull;

ull modeq(ull n , ull m) {
    ull count=0 , a;
    vector<ull> hash(n+1,1);
    for(ull i=2 ; i<=n ; i++) {
        a = m%i;
        count += hash[a];
        for(ull j=a ; j<=n ; j+=i)
            hash[j]++;
    }
    
    return  count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ull t , n , m;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        cout << modeq(n,m) << "\n";
    }
    return 0;
}