#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t , x , a , b;
    cin >> t;
    while(t--) {
        cin >> x >> a >> b;
        b *= (100-x);
        a += b;
        a *= 10;
        cout << a << "\n";
    }
    return 0;
}