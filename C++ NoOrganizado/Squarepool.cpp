#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t, n, s, dx, dy, xi, yi;
    cin >> t;
    while (t--) {
        int cont = 0;
        cin >> n >> s;
        for (int i = 0; i < n; i++) {
            cin >> dx >> dy >> xi >> yi;
            if (xi==yi && dx*dy>0) {
                cont++;
            }
            else if (xi+yi==s && dx*dy<0) {
                cont++;
            }
        }
        cout << cont << "\n";
    }
    return 0;
}