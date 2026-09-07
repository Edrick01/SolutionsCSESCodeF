#include <bits/stdc++.h>

using namespace std;
int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--){
    int n; cin >> n; bool possible = false;
    for (int i=0; i<n; i++){
      int x; cin >> x;
      if (x==1 && i==0) possible=true;
    }
    if (possible) cout << "YES\n";
    else cout << "NO\n";
  }

  return 0;
}