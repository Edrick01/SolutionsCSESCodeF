#include <bits/stdc++.h>

using namespace std;

void solve () {
  long long n, k; cin >> n >> k;
  long long maxd = 4*n-2, res=0;
  long long mind = maxd-2;
  if (k == maxd) {
    res=(2*n);
    cout << res << "\n";
    return;
  }
  else {
    if (k<=mind) {
      if (k%2==0) {
        res = k/2;
      }
      else {
        res = k/2 +1;
      }
    }
    else {
      cout << 2*n-1 << "\n";
      return;
    }
  }
  cout << res << "\n";
}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--)
  solve();
  return 0;
}