#include <bits/stdc++.h>
using namespace std;

void solve () {
  int n, l, r; cin >> n >> l >> r;
  int k=r-l+1;
  vector<long long> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int limite=max(r,n-l+1);  
  sort(v.begin(), v.begin()+limite);
  long long res=0;


  for (int i=0; i<k; i++) {
    //cout << v[(n-1)-i] << " ";
    res += v[(limite-1)-i];  
  }
  //cout << "\n";
  cout << res << "\n";
}


int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  //int t; cin >> t;
  //while (t--) 
  solve();
  return 0;
}