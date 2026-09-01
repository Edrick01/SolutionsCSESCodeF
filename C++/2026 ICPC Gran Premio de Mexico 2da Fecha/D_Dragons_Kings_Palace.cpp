#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
using namespace std;
using ll = long long;
using vll = vector<ll>;
using pll = pair<ll, ll>;
using vch = vector<char>;
using vbo = vector<bool>;
using vpll = vector<pair<ll,ll>>;
using mll = vector<vll>;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        ll x1, y1, r1;
        ll x2, y2, r2;
        ll k;
        cin >> x1 >> y1 >> r1;
        cin >> x2 >> y2 >> r2;
        cin >> k;

        ll d = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));

        ll minRad = min(r1, r2);
        ll maxRad = max(r1, r2);
        if (d  > r1 + r2) {
            if (k <= r1*2 || k <= r2*2) cout << "YES\n";
            else cout << "NO\n";
            continue;
        } else if (minRad + d < maxRad){
            if (maxRad * 2 >= k) {
                cout << "YES" << "\n";
            } else {
                cout << "NO" << "\n";
            }
        } else {
            if (d + minRad + maxRad >= k) {
                cout << "YES" << "\n";
            } else {
                cout << "NO" << "\n";
            }
        }

    }
    return 0;
}
