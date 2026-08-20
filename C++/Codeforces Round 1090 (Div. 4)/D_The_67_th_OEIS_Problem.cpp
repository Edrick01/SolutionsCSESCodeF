#include <bits/stdc++.h>
using namespace std;

void solve () {
  long long n; cin >> n;
  for (long long i=1; i<=n; i++) {
    cout << (2*i-1)*(2*i+1) << " ";

  }
  cout << "\n";
}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) 
  solve();
  return 0;
}