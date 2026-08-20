#include <bits/stdc++.h>
using namespace std;

void solve () {
  int n; cin >> n;
    long long x = n/2;
    long long l1=x/2;
    long long l2=x-l1;

    cout << l1*l2 << "\n";
}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  //int t; cin >> t;
  //while (t--) 
  solve();
  return 0;
}