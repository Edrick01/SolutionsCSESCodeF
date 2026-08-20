#include <bits/stdc++.h>
using namespace std;

void solve () {
  int n, a, b=-1;
  bool res = true;
  cin >> n;
  for (int i = 0; i<n; i++){
    cin >> a;
    if (a==0) res = false;
    if (a!=-1) {
      if (b==-1) b=a;
      else if (a!=b) res = false;
    }
  }
  if (res) cout << "YES\n";
  else cout << "NO\n";
}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();

}