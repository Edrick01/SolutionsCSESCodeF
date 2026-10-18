#include <bits/stdc++.h>

using namespace std;

int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  int res=100000+67;
  for (int i=0; i<n; i++){
    int a; cin >> a;
    res=min(res,abs(a));
  }
  cout << res <<'\n';
  return 0;
}