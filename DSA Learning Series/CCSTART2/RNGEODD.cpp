#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll l, r, i;
    cin >> l >> r;
    
    if(l & 1)
        i=l;
    else
        i=l+1;
    
    for(i ; i<=r ; i+=2)
        cout << i << " ";
    
    return 0;
}