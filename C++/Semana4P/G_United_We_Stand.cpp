#include <bits/stdc++.h>

using namespace std;

void solve () {
  int n; cin >> n;
  vector<long long> a;
  vector<long long> b;
  vector<long long> c;
  for (int i=0; i<n; i++) {
      long long x; cin >> x;
      a.push_back(x);
  }
  sort(a.begin(), a.end());
  b.push_back(a[0]);
  int idx=0;
  for (int i=1; i<n; i++) {
    if (b[idx]%a[i]) c.push_back(a[i]);
    else {
        b.push_back(a[i]);
        idx++;
    }
  }
  if (c.size()==0 || b.size()==0) {cout << -1 << "\n"; return;}
  else cout << b.size() << " " << c.size() << "\n";
  while (!b.empty()){
      cout << b.back() << " ";
      b.pop_back();
  }
  cout << "\n";
  while (!c.empty()){
      cout << c.back() << " ";
      c.pop_back();
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