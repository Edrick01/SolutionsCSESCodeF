#include <bits/stdc++.h>
using namespace std;

void solve () {
  int n, cont=0, cont1=0; cin >> n;
  for (int i =0; i<n; i++) {
    int x; cin >> x;
    if (x==0){
      cont++;
    }
    else if (x==-1) {
      cont1++;
    }
  }
  if (cont1%2){
    cout << 2+cont << "\n";
  }
  else {
    cout << cont << "\n";
  }
}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) 
  solve();
  return 0;
}