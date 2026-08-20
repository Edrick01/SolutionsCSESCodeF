#include <bits/stdc++.h>
using namespace std;

void solve () {
  int n, cont=0; cin >> n;
  string s; s=to_string(n);
  for (char c: s){
    int d=c-'0';
    if (d!=0 && n%d==0){
      cont++;
    }
  }
  cout << cont << "\n";
}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  //int t; cin >> t;
  //while (t--) 
  solve();
  return 0;
}