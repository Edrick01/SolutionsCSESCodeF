#include <bits/stdc++.h>
using namespace std;

void solve () {
  int n, a, max=0, sum=0; cin >> n;

  while (n--) {
    cin >> a;
    if (a==0) sum++;
    else {
      if (sum > max) max = sum;
      sum=0;
    }
  }
  if (sum > max) max = sum;
  cout << max << "\n";
}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) 
  solve();
  return 0;
}