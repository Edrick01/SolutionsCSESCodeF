#include <bits/stdc++.h>
using namespace std;

void solve () {
  int n; cin >> n;
  if (n%3){
    //cout << n%3 << "\n";
    cout << 3-(n%3) << "\n";
    return;
  }
  cout << 0 << "\n";
  
}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) 
  solve();
  return 0;
}