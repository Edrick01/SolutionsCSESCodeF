#include <bits/stdc++.h>
using namespace std;

void solve () {
  int n, p; cin >> n >> p;
  vector<vector<int>> g(p, vector<int>(3));
  for (int i=0; i<n; i++) {
    for (int j=0; j<p; j++) {
      char c; cin >> c;
      int x; cin >> x;
      if (c=='+') {

        g[j][0]++;
        g[j][1]++;
      }
      else if (c=='-') {
        if (x!=0){
          g[j][1]++;
        }
      }

      g[j][2]+=x;
    }
  }

  for (int i=0; i<p; i++){
    for (int j=0; j<3; j++){
      cout << g[i][j] << " ";
    } 
    cout << "\n";
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