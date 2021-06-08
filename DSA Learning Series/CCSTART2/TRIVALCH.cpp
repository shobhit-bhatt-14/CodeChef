#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll a, b, c;
    cin >> a >> b >> c;
    
    if(a+b >= c && b+c >= a && c+a >=b)
        cout << "YES\n";
    else
        cout << "NO\n";
    
    return 0;
}