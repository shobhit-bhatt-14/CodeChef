#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        string str = to_string(n);
        reverse(str.begin() , str.end());
        
        n = stoi(str);
        
        cout << n << "\n";
    }

    return 0;
}