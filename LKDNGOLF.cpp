#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t , n , x , k , b;
    cin >> t;
    while(t--) {
        cin >>  n >> x >> k;
        b = n+1-x;
        if(!(x%k) || !(b%k) ) {
            cout << "YES" << "\n";
            continue;
        }
        
        cout << "NO" << "\n";
    }
    return 0;
}