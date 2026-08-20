#include <bits/stdc++.h>

using namespace std;

void solve () {
  int n, res=0, res2=0;
  cin >> n;
  for (int i=1; i<=n;i++){
    char c;
    cin >> c;
    if (c=='.' && res2!=-1){
      res++;
      res2++;
    }
    if (c=='#' && res2>=3) res2=-1;
    else if (c=='#' && res2!=-1) res2=0;
  }
  if (res2==-1 || res2>=3) cout << 2 << "\n";
  else cout << res << "\n";
}


int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--)
  solve();
  
  return 0;
}