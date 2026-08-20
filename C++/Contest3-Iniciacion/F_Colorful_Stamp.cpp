#include <bits/stdc++.h>
using namespace std;

void solve () {
  int n, cb=0,cr=0; cin >> n;
  vector<char> s(n);
  for (int i=0; i<n; i++) cin >> s[i];

  for (int i=0; i<n; i++){
    if (s[i]=='B') {
      cb++;
    }
    if (s[i]=='R') {
      cr++;
    }
    if (s[i]=='W'){
      if ((cb==0 || cr==0) && (cb!=0 || cr!=0)) {
        cout << "NO\n";
        return;
      }
      cb=0;
      cr=0;
    }
  
  }
  if ((cb==0 || cr==0) && (cb!=0 || cr!=0)) {
    cout << "NO\n";
    return;
  }
  cout << "YES\n";
}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) 
  solve();
  return 0;
}