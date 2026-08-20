#include <bits/stdc++.h>

using namespace std;

void solve () {
  float n,m, res=0; cin >> n >> m;
  bool dentro;
  for (int i=0; i<m; i++) {
      dentro=false;
      for (int j=0; j<n; j++) {
          char a; cin >> a;
          if (a=='/' || a=='\\') {
            res+=0.5;
            dentro=!dentro;
          }
          if (a=='.') {
            if (dentro) res+=1;
          }
        }
  }
  cout << fixed << setprecision(2) << res << "\n";
}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);
  //int t; cin >> t;
  //while (t--)
  solve();
  return 0;
}