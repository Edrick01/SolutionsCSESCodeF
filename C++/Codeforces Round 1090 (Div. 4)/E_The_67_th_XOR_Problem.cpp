#include <bits/stdc++.h>
using namespace std;

void solve () {
  int n, r=0;
  cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  for (int i=0; i<n-1; i++) {
    for (int j=i+1; j<n; j++) {
      r=max(r,v[i]^v[j]);
    }
  }
  cout << r << "\n";
}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) 
  solve();
  return 0;
}