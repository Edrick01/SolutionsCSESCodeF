#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);

    map<int,int> pos;

    for (int i = 0; i < n; i++) {
        cin >> p[i];
        pos[p[i]] = i;
    }

    int bus = n;

    for (int i = 0; i < n; i++) {
      
        if (p[i] == bus) {
            bus--;
            continue;
        }
        int posrever = pos[bus];

        reverse(p.begin() + i, p.begin() + posrever + 1);
        break;
    }

    for (int i = 0; i < n; i++) cout << p[i] << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}