#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>

void solve(){
    ll n, k; cin >> n >> k;
    k--;

    vll v(n);
    ll start;
    for(ll i = 0; i < n; i++){
        cin >> v[i];
        if(i == k) start = v[i]; 
    }
    
    sort(v.begin(), v.end());

    ll level = 0;
    for(ll i = 0; i < n-1; i++){
        if(v[i] < start) continue;
        
        ll time_needed = v[i+1]-v[i];
        level += time_needed;

        if(level > v[i]){
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t; cin >> t; while(t--) solve();
}