#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, n;
    cin >> t;
    while(t--) {
        cin >> n;

        vector< pair<int, int> > arr;
        int x, c=0;

        for(ll i=0 ; i<n ; i++) {
            cin >> x;
            arr.pb(mp(x, i));
        }

        sort(arr.begin(), arr.end());

        for(ll i=0 ; i<n ; i++) {
            if(arr[i].first > c) {
                arr[i].first = c;
                c++;
            }
        }

        sort(arr.begin(), arr.end(), [](auto &left, auto &right){
            return left.second < right.second;
        });

        for(ll i=0 ; i<n ; i++) {
            cout << arr[i].first << " ";
        }

        cout << "\n";
    }
    return 0;
}