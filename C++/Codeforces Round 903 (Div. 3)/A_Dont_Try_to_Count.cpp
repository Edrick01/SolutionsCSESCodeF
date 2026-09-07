#include <bits/stdc++.h>

using namespace std;

void solve () {

 int n, m; cin >> n >> m;
    string x, s, auxi; cin >> x >> s;
    int i= 1;
    auxi=x;
    if (x.find(s)!=string::npos){
      cout << 0 << "\n";
      return;
    }
    while (i<=10){
      auxi+=auxi;
      if (auxi.find(s)!=string::npos){
        cout << i << "\n";
        return;
      }
      i++;
    }
    cout << "-1\n";
}
int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--){
   solve();
  }

  return 0;
}