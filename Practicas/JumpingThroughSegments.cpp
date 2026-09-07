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
 
bool check(ll k, vpll& arr);


int main() {
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll t; cin >> t;
    while (t--) {
        
        ll n; cin >> n; 
        vpll v(n);
        for (ll i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
        

        ll l = 0, r  = 1e9 + 1;
        ll ans = 0;

        while (l <= r) {
            ll mid = l + (r - l) / 2;
            if (check(mid, v)) {
                r = mid - 1;
                ans = mid;
            } else {
                l = mid + 1;
            }
        } 
        cout << ans << "\n";

    }
    return 0;
}


bool check(ll k, vpll& arr) {
    //checar si cumple

    ll myMin = 0, myMax = 0;
    for (ll i = 0; i < arr.size(); i++) {
        if (myMax + k < arr[i].first && myMin - k < arr[i].first) return false;
        if (myMin + k > arr[i].second && myMin -k > arr[i].second) return false;

        myMin = max(myMin - k, arr[i].first);
        myMax = min(myMax + k, arr[i].second);
    }
    return true;
}