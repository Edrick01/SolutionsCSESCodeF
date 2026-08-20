#include <bits/stdc++.h>
using namespace std;

void solve () {
  int max=-69, sum=0;
  vector<int> v(7);
  for (int i=0; i<7; i++) cin >> v[i];
  for (int i=0; i<7; i++) {
    if (v[i]>max) max=v[i];
  }
  for (int i=0; i<7; i++) {
    sum-=v[i];
  }
  cout << sum+max+max << "\n";
}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) 
  solve();
  return 0;
}