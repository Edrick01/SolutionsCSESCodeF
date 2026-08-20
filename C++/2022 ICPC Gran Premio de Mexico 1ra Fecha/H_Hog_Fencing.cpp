#include <bits/stdc++.h>

using namespace std;

int main () {
  int n; cin >> n;
  if (n%4==0) cout << n/4 * n/4 << "\n";
  else cout << (n/4) * ((n-(n/4 * 2 ))/2) << "\n";
  return 0;
}