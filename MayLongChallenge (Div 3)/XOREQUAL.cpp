#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t , n;
    cin >> t;
    while(t--) {
        cin >> n;
        long long int x=2 , y=n-1 , temp=1;
        while(y) {
            if(y & 1) {
                temp *= x;
                temp %= mod;
            }
            x *= x;
            x %= mod;
            y /= 2;
        }
        temp %= mod;
        cout << temp << "\n";
    }
    return 0;
}