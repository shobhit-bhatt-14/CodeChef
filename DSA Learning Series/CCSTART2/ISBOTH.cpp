#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n , i;
    cin >> n;
    vector<string> ans = {"BOTH" , "ONE" , "NONE"};
    if(n%55==0)
        i=0;
    else if(n%5==0 || n%11==0)
        i=1;
    else
        i=2;
    
    cout << ans[i] << "\n";
    
    return 0;
}