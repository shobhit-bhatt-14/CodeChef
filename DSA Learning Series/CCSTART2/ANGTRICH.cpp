#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll a, b, c;
    cin >> a >> b >> c;
    
    if(a+b+c==180 && a!=0 && b!=0 && c!=0)
        cout << "YES\n";
    else
        cout << "NO\n";
    
    return 0;
}