#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--) {
        ll doses , age , min , max , input , x , flag=0 , days , i=10;
        cin >> age >> doses;
        vector<ll> persons;
        while(i--) {
            cin >> input;
            persons.push_back(input);
        }
        
        for(ll k=age ; k<10 ; k++)
            flag += persons[k];
        
        days = flag/doses;
        min = days+1;
        
        x = flag%doses;
        x += persons[age-1];
        
        days += x/doses;
        
        if(x%doses == 0)
            max = days;
        else
            max = days+1;
        
        cout << min << " " << max << "\n";
    }
    
    return 0;
}