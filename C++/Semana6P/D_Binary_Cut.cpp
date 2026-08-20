#include <bits/stdc++.h>
using namespace std;

void solve () {
  string s;
  cin >> s;
  int n = s.size() , cont=1;
  bool res = false;
  for (int i=0; i<n-1; i++) {
    if (s[i]!=s[i+1]) cont++;
    if (s[i]=='0' && s[i+1]=='1') res = true;
  }
  if (res) cont--;

  cout << cont << "\n";
}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) 
  solve();
  return 0;
}