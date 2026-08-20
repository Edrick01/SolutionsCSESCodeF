#include <bits/stdc++.h>

using namespace std;
#define ll long long
void solve () {
  ll a, b, c, d;
  cin >> a >> b >> c >> d;
  ll length = min(b,d) -max(a,c);
  if (length < 0) cout << 0 << "\n";
  else cout << length << "\n";
}


int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  
  int t; cin >> t;
  while (t--) solve();

  return 0;
}