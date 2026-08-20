#include <bits/stdc++.h>

using namespace std;

void solve () {
  string s;
  cin >> s;
  s.pop_back();
  s.pop_back();
  cout << s+'i'<<"\n";
  
}


int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--)
  solve();
  
  return 0;
}