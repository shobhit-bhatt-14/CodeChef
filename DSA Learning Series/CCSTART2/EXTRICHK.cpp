#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll a, b, c;
    cin >> a >> b >> c;
    if(a+b > c && b+c > a && c+a > b) {
        if(a==b && b==c && c==a)
            cout << "1";
        else if(a==b || b==c || c==a)
            cout << "2";
        else if(a!=b && b!=c && c!=a)
            cout << "3";
    }
    else
        cout << "-1";

    return 0;
}