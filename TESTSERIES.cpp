#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll t;
    while(t--) {
        int x, ind=0, eng=0;
        for(int a=0 ; a<5 ; a++) {
            cin >> x;
            switch (x) {
                case 1 : ind++;
                    break;
                case 2 : eng++;
                    break;
                default:
                    break;
            }
        }
        
        if(ind > eng)
            cout << "INDIA\n";
        else if(eng > ind)
            cout << "ENGLAND\n";
        else
            cout << "DRAW\n";
    }
    return 0;
}