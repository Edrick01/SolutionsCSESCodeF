//Complete
#include <bits/stdc++.h>

using namespace std;

int main () {
  ios::sync_with_stdio(0); cin.tie(0);

  int t; cin >> t;
  while (t--){
    int n, k; cin >> n >> k;
    bool possible=false;
    for (int i=0; i<n; i++){
      int x; cin >> x;
      if (x==k){
        possible=true;
      }
    }
    if (possible){
      cout << "YES\n";
    }
    else cout << "NO\n";
  }
  return 0;
}