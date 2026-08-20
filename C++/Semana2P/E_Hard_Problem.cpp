#include <bits/stdc++.h>

using namespace std;

void solve () {
  long long m, a, b, c, sit;
  cin >> m >> a >> b >> c;
  if (a>=m) sit=m;
  else sit=a;
  if (b>=m) sit+=m;
  else sit+=b;
  if (c+sit>=m*2) sit=m*2;
  else sit+=c;
  //cout << sit << "\n";
  cout << sit << "\n";
}


int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) solve();
  
  return 0;
}