#include <bits/stdc++.h>

using namespace std;

void solve () {
  int n, p, max=0;
  cin >> n >> p;
  for (int i = 0; i < n; i++){
    int prize;
    cin >> prize;
    if ((prize <= p && max == 0) || (prize <= p && prize > max)) max=prize;
  }
  cout << max << "\n";
}


int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  // int t; cin >> t;
  // while (t--)
  solve();
  
  return 0;
}