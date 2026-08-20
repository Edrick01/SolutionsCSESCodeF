#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, n, cv=0, ct=0, res=0;
    char s[100];
    cin >> t;
    for (int i=0; i<t; i++) {
        cin >> n;
        for (int j=0; j<n; j++) {
        
        cin >> s[j];
        

    }
    cv=0;
    ct=0;
    res=0;
    for (int j=0; j<n; j++) {
        
        if(s[j]=='.'){
            ct++;
            cv++;
        }
            if (s[j]=='#'){
                    ct=0;
            }
        if (ct==3){
            res=2;
            break;
        }
        else {
            res=cv;
        }
        

    }
    cout << res << "\n";


    }
   



    return 0;
}