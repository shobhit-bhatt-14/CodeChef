#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        char str[k][100];
        for (int i = 0; i < k; i++)
            scanf("%s", str[i]);

        int ch = 0;
        for(int i=0 ; i<k ; i++) {
            if(str[i][0]>='a' && str[i][0]<='z') {
                if(str[i][0] >= 'a' && str[i][0] <= 'm') {
                    for(int j=0 ; str[i][j]!='\0' ; j++) {
                        if(!(str[i][j] >= 'a' && str[i][j] <= 'm')) {
                            ch = 1;
                            break;
                        }
                    }
                }
                else
                    ch = 1;
            }
            else {
                if(str[i][0] >= 'N' && str[i][0] <= 'Z') {
                    for(int j=0 ; str[i][j]!='\0' ; j++) {
                        if(!(str[i][j] >= 'N' && str[i][j] <= 'Z')) {
                            ch = 1;
                            break;
                        }
                    }
                }
                else
                    ch = 1;
            }
            if (ch == 1)
                break;
        }

        ch ? cout << "no\n" : cout << "yes\n";
    }

    return 0;
}