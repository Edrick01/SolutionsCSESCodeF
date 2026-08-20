#include <bits/stdc++.h>
using namespace std;

void solve () {
  int n, k, aux=0, res=0; cin >> n >> k;
  char c;
  bool op=false;
  while (n--) {
    cin >> c;
    if (c=='B' && !op) {
      res++;
      op=true;
    }
    if (op && aux<k){
      aux++;
    }
    if (aux==k) {
      op=false;
      aux=0;
    }
  }
  cout << res << "\n";
}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) 
  solve();
  return 0;
}