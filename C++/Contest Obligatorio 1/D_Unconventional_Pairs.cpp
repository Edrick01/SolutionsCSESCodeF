#include <bits/stdc++.h>
using namespace std;

void solve () {
  int n; cin >> n;
  vector<long long> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  sort(v.begin(), v.end());
  long long res=-1;
  for (int i=0; i<n-1; i+=2){

    res = max(res, abs(v[i]-v[i+1]));
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