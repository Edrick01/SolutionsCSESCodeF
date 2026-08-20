#include <bits/stdc++.h>

using namespace std;
void solve() {
  int n, a, b; cin >> n >> a >> b;
  vector<int> p(n);
  while (a--) {
      int x; cin >> x; p[x-1]=1;
  }
  while (b--) {
      int x; cin >> x; 
      if (p[x-1]!=1) p[x-1]=2;
  }
  for (int i=0; i<n; i++) cout << p[i] << " ";
  cout << "\n";
}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);
  // int t; cin >> t;
  // while (t--) 
  solve();
  return 0;
}