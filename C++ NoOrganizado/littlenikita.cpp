#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    int n, m;

    while (t--){
        cin >> n >> m;
        if ((n-m)%2==0 && n>=m){
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}   