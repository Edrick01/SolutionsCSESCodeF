#include <bits/stdc++.h>
using namespace std;

long long pot3 (int n) {
  if (n<0) return 0;
  long long res =1;
  for (int i=0; i<n; i++) res*=3;
  return res;
}

void solve () {
  long long n; cin >> n;

  long long res=0;
  int potencia=0;

  while (n>0){
    int dig = n%3;

    if (dig>0){
      long long costact = pot3(potencia+1);
      if (potencia>0){
        costact+=pot3(potencia-1)*potencia;
      }
      res+=dig*costact;
    }
    n/=3;
    potencia++;

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