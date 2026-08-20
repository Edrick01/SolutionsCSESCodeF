#include <bits/stdc++.h>
using namespace std;

void solve () {
  string s1, s2; cin >> s1 >> s2;
  char c1, c2;
  c1=s1[0];
  c2=s2[0];
  s1[0]=c2;
  s2[0]=c1;
  cout << s1 << " " << s2 << "\n";
}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) 
  solve();
  return 0;
}