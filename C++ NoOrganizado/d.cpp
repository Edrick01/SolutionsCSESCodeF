#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>

void solve(){
    ll n; cin >> n;

    vll v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    ll ans = 0;
    for(ll i = 0; i < n; i+=2){
        ans = max(ans, v[i+1]-v[i]);
    }

    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t; cin >> t; while(t--) solve();
}