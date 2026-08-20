#include <bits/stdc++.h>
using namespace std;

void solve () {
  int a, b, k; cin >> a >> b >> k;
  for (int i=1; i<=k; ++i){
    cout << a*i+b << " ";
  }
}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  //int t; cin >> t;
  //while (t--) 
  solve();
  return 0;
}