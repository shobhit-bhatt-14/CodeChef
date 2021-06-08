#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll t;
    cin >> t;
    while(t--) {
        string str;
        cin >> str;
        ll len= str.length();
        map<int,int> pre, post;
        
        for(ll i=0 ; i<len/2 ; i++) {
            pre[str[i]-'a']++;
            post[str[len-1-i]-'a']++;
        }
        
        if(pre == post)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}