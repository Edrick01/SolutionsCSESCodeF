#include <bits/stdc++.h>

using namespace std;

void solve () {
  int n, s, x, count = 0, needed=0;
  cin >> n >> s >> x;
  for (int i = 0; i < n; i++) {
    int a; cin >> a;
    count += a;
  }
  needed = s - count;
  
 if (needed >= 0 && needed % x == 0) cout << "YES\n";
    else cout << "NO\n";
    
  
}


int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--)
  solve();
  
  return 0;
}