#include <bits/stdc++.h>

using namespace std;

struct cell{
  int r;
  int c;
};

void solve () {
  int n, m; cin >> n >> m;
  vector <cell> mat (max(n,m));
  int maxr=0, maxc=0;
  for (int i=0; i<n; i++) {
      for (int j=0; j<m; j++) {
          char a; cin >> a;
          if (a=='1') {
              mat[i].r++;
              mat[j].c++;
          }
      }
  }
  for (int i=0; i<max(n,m); i++){
      if (mat[i].r %2) maxr++;
      if (mat[i].c %2) maxc++;
  }
  cout << max(maxr, maxc)<< "\n";
}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--)
  solve();
  return 0;
}