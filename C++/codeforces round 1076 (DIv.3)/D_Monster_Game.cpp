#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve () {
  int n; cin >> n;
  vector <ll> a (n);
  vector <ll> b (n);

  for (ll &x : a) cin >> x;
  for (ll &x : b) cin >> x;
  sort (a.rbegin(), a.rend());
  
  ll res=0;
  ll needed=0;
  
  for (int i=0; i<n; i++){
    needed += b[i];
    if (needed > n) break;
    res = max (res, (a[needed-1]*(i+1)));
  }
  cout << res << "\n";

}


int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--)
  solve();
  
  return 0;
}
