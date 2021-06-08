#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll n, i, j, pre=1;
    cin >> n;
    
    for(i=1 ; i<=n ; i++) {
        if(i & 1) {
            for(j=pre ; j<=5*i ; j++)
                cout << j << " ";
                
            pre = j;
        }
        else {
            for(j=5*i ; j>=pre ; j--)
                cout << j << " ";
                
            pre = (5*i)+1;
        }
        cout << "\n";
    }
    
    return 0;
}