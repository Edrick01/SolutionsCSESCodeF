#include <bits/stdc++.h>

using namespace std;

void solve () {
  char c;
  cin >> c;
  if (c=='c' || c=='o' || c=='d' || c=='e' || c=='f' || c=='r' || c=='s') cout << "YES\n";
  else cout << "NO\n";
}


int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--)
  solve();
  
  return 0;
}