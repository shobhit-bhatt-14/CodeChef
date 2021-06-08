#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll n;
    cin >> n;
    
    if(n%5==0 || n%6==0)
        cout << "YES\n";
    else
        cout << "NO\n";
    
    return 0;
}
