#include <bits/stdc++.h>
using namespace std;

void solve () {
  int n, contp=0, contimp=0; cin >> n;
  vector<long long> v(n);
  for (int i=0; i<n; i++) {
    cin >> v[i];
    if (v[i] % 2 == 0) contp++;
    else contimp++;
  }
  if (contp>0 && contimp>0) {
    sort(v.begin(), v.end());
  }
  for (int i=0; i<n; i++) {
    cout << v[i] << " ";
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