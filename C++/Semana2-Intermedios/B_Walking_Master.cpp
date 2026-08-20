#include <bits/stdc++.h>

using namespace std;

void solve () {
  long long a, b, c, d;
  cin >> a >> b >> c >> d;
  if (b>d) {
    cout << -1 << "\n";
    return;
  }
  else if ((abs(d-b)+a)<c) {
    cout << -1 << "\n";
    return;
  }
  else {
    int res = abs(d-b)+abs(c-(a+abs(d-b)));
    cout << res <<"\n";
  }
}


int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--)
  solve();
  
  return 0;
}