#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll n , x , cost=INT_MIN;
    cin >> n;
    vector<ll> budget;
    while(cin >> x)
        budget.push_back(x);
    
    sort(budget.begin() , budget.end());
    
    for(ll i=0 ; i<n ; i++) {
        x = budget[i]*(n-i);
        if(x > cost)
            cost = x;
    }
    
    cout << cost << "\n";

    return 0;
}