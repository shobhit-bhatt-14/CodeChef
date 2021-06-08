#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll n , i;
    cin >> n;
    
    for(i=1 ; i<=n ; i++)
        cout << setfill(' ') << setw(n) << string(i,'*') << "\n";
    
    return 0;
}