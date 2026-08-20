#include <bits/stdc++.h>
using namespace std;

void solve () {
  int n; cin >> n;
  long long movimientos=0;
  for (int i=0; i<n; i++){
    long long a, b, c, d; cin >> a >> b >> c >> d;
    if (b>d){
      movimientos+=a+(b-d);
    }
    else {
      movimientos+= max(0LL, a-c);
    }
  }
  cout << movimientos << "\n";
}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) 
  solve();
  return 0;
}