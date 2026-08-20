#include <bits/stdc++.h>

using namespace std;

void solve () {
  int n, q, a; cin >> n >> q;
  vector <int> may (n+2);
  may[0]=0;
  for ( int i=0; i<n; i++){
    cin >> may[i+1];
  }
  for (int i=0; i<n;i++){
    cin >> a;
    if (a>may[i+1]) may[i+1]=a;
  }
  //for (int i=0; i<n; i++) cout << may[i] << " ";
  
  for (int i = n-1; i >= 1; i--) {
    if (may[i] < may[i+1]) may[i] = may[i+1];
  }
  //for (int i=0; i<n; i++) cout << may[i] << " ";
  for (int i=2; i<=n; i++){
    may[i] += may[i-1];
  }
  while (q--){
    int l, r; cin >> l >> r;
    cout << may[r] - may[l-1] << " ";
  }
  cout << "\n";

}


int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--)
  solve();
  
  return 0;
}