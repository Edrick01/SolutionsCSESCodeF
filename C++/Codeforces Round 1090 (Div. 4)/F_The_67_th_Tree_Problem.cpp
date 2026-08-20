#include <bits/stdc++.h>
using namespace std;

void solve () {
  int x, y; cin >> x >> y;
  if ((x+y)%2==0){
    x--;
  }
  else {
    y--;
  }
  if (x>y||x<0 || y<0) {
    cout << "NO\n";
    return;
  }
  else {
    cout << "YES\n";
    for (int i=2; i<=y+1;i++){
      cout << "1 " << i << "\n";
    }
    for (int i=y+2; i<=x+y+1;i++){
      cout << i-y << " " << i << "\n";
    }
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