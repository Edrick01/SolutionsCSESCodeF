#include <bits/stdc++.h>
using namespace std;

void solve () {
  int n, m, min1=1000000, min2=1000000, min3=1000000; cin >> n;
  string s;
  while (n--)
  {
    cin >> m >> s;
    if (s[0]=='1'){
      if (m < min1) min1 = m;
    }
    if (s[1]=='1'){
      if (m < min2) min2 = m;
    }
    if (s[0]=='1'&& s[1]=='1'){
      if (m < min3) min3 = m;
    }
  }
  
  if ((min1==1000000 || min2==1000000) && min3==1000000) cout << "-1\n";
  else if (min1 + min2 < min3) cout << min1 + min2 << "\n";
  else cout << min3 << "\n";

}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) 
  solve();
  return 0;
}