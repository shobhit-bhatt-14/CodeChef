#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll n, k, x, ch=-1;
    cin >> n >> k;
    
    while(n--) {
        cin >> x;
        if(x==k)
            ch=1;
    }
    
    cout << ch << "\n";
    
    return 0;
}