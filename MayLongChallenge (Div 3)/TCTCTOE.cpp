#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        vector<string> str;
        int i=3 , cX=0 , cO=0;
        string s;
        unordered_map<char,int> hash;
        while(i--) {
            cin >> s;
            str.push_back(s);
            hash[s[0]]++;
            hash[s[1]]++;
            hash[s[2]]++;
        }
     
        //winnings for X
        if(str[0][0]=='X' && str[0][1]=='X' && str[0][2]=='X')
            cX = 1;
        if(str[1][0]=='X' && str[1][1]=='X' && str[1][2]=='X')
            cX = 1;
        if(str[2][0]=='X' && str[2][1]=='X' && str[2][2]=='X')
            cX = 1;
        if(str[0][0]=='X' && str[1][0]=='X' && str[2][0]=='X')
            cX = 1;
        if(str[0][1]=='X' && str[1][1]=='X' && str[2][1]=='X')
            cX = 1;
        if(str[0][2]=='X' && str[1][2]=='X' && str[2][2]=='X')
            cX = 1;
        if(str[0][0]=='X' && str[1][1]=='X' && str[2][2]=='X')
            cX = 1;
        if(str[0][2]=='X' && str[1][1]=='X' && str[2][0]=='X')
            cX = 1;
            
        //winnings for O
        if(str[0][0]=='O' && str[0][1]=='O' && str[0][2]=='O')
            cO = 1;
        if(str[1][0]=='O' && str[1][1]=='O' && str[1][2]=='O')
            cO = 1;
        if(str[2][0]=='O' && str[2][1]=='O' && str[2][2]=='O')
            cO = 1;
        if(str[0][0]=='O' && str[1][0]=='O' && str[2][0]=='O')
            cO = 1;
        if(str[0][1]=='O' && str[1][1]=='O' && str[2][1]=='O')
            cO = 1;
        if(str[0][2]=='O' && str[1][2]=='O' && str[2][2]=='O')
            cO = 1;
        if(str[0][0]=='O' && str[1][1]=='O' && str[2][2]=='O')
            cO = 1;
        if(str[0][2]=='O' && str[1][1]=='O' && str[2][0]=='O')
            cO = 1;
            
        //checking
        if((cX==1 && cO==1) || hash['X']<hash['O'] || (hash['X']-hash['O'])>1)
            cout << "3" << "\n";
        else if(hash['_']==9)
            cout << "2" << "\n";
        else if(cX==1 && cO==0 && hash['X']>hash['O'])
            cout << "1" << "\n";
        else if(cX==0 && cO==1 && hash['X']==hash['O'])
            cout << "1" << "\n";
        else if(cX==0 && cO==0 && hash['_']==0)
            cout << "1" << "\n";
        else if(cX==0 && cO==0 && hash['_']>0)
            cout << "2" << "\n";
        else
            cout << "3" << "\n";
    }
    return 0;
}