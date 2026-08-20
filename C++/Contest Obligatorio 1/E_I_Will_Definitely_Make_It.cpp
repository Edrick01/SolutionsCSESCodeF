#include <bits/stdc++.h>
using namespace std;

void solve () {
  int n, k; cin >> n >> k;
  k--;
  vector<long long> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  long long inicio=v[k], maxalt;
  sort(v.begin(), v.end()); 
  maxalt=v[n-1];
  if (inicio==maxalt){
    cout << "YES\n";
    return;
  }
  v.erase(unique(v.begin(), v.end()), v.end());
  
  for (int i=0; i<v.size(); i++) {
    if (v[i]==inicio) {
      inicio=i;
      break;
    }
  }

  long long t=0;
  for (int i=inicio; i<v.size()-1; i++){
    long long tact=t+(v[i+1]-v[i]);
    if (tact>v[i]) {
      cout << "NO\n";
      return;
    }
    t=tact;
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