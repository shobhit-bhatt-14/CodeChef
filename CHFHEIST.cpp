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
        ll days, interval, rate, increase, total=0;
        cin >> days >> interval >> rate >> increase;

        ll ch = (days/interval);
        total += interval*( (rate*ch) + (( increase*ch*(ch-1) )/2) );
        rate += (increase*ch);
        total += ( days-(ch*interval) )*rate;

        cout << total << "\n";
    }

    return 0;
}