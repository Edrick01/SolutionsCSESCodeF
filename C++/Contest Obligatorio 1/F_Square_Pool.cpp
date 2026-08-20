#include <bits/stdc++.h>
using namespace std;

void solve () {
  long long nb, ln, cont=0; cin >> nb >> ln;
  
  for (int i=0; i<nb; i++){
    int dirx, diry; cin >> dirx >> diry;
    int posinix, posiniy; cin >> posinix >> posiniy;
    if (posinix==posiniy && dirx*diry>0) {
      cont++;
    }
    else if (posinix+posiniy==ln && dirx*diry<0) {
      cont++;
    }
  }
  cout << cont << "\n";
}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) 
  solve();
  return 0;
}