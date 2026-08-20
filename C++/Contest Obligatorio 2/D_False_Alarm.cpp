#include <bits/stdc++.h>
using namespace std;

void solve () {
  int n, x; cin >> n >> x;
  bool res=false;
  for (int i=0; i<n; i++) {
    int a; cin >> a;
    if (a==1 || res){
      res=true;
      x--;
    }
    if (a==1 && x<0) {
      res=false;
    }
  }
  if (res) cout << "YES\n";
  else cout << "NO\n";
}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) 
  solve();
  return 0;
}