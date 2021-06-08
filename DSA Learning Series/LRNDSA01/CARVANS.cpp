#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n, x, count=0, pre=INT_MAX;
        cin >> n;
        while(n--) {
            cin >> x;
            if(x <= pre) {
                count++;
                pre = x;
            }
        }
        
        cout << count << "\n";
    }
    
    return 0;
}