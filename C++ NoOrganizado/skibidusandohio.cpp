#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    string s;

    bool verdadero;
    while (t--){
        verdadero=false;
        cin >> s;
        int aux=s.size();
        for (int i=1;i<aux;i++){
            if (s[i]==s[i-1]){
            cout << 1 << "\n";
            verdadero=true;
            break;
            }
        }
        if (!verdadero){
        cout << s.size() << "\n";
        }

        
    }
    

    return 0;
}