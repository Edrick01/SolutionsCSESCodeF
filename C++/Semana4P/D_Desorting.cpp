#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
void solve () {
  int n;
  bool uns=0;
  ll mini=2e18;
  cin >> n;
  vector<ll>a(n);
  
  for (int i=0; i<n;i++){
    cin >> a[i];
    if (i>0){
      if (a[i]<a[i-1]){
        uns=1;
      }
      mini=min(mini,a[i]-a[i-1]);
    }
  }

  if (uns) cout << "0\n";
  else cout << mini/2 + 1 <<"\n";
 
}


int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--)
  solve();
  
  return 0;
}
