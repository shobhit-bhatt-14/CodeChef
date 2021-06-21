#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while(t--) {
        ll water, pulp, reqWater, reqPulp;
        cin >> water >> pulp >> reqWater >> reqPulp;

        cout << (reqWater/water)+(reqPulp/pulp) << "\n";
    }

    return 0;
}