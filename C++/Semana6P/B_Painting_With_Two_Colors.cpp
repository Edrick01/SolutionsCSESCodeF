#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, a, b;
  cin >> n >> a >> b;
  if (n % 2) {
    if (a % 2 == 0 || b % 2 == 0) {
      cout << "NO\n";
      return;
    }

  } else {
    if (n <= 4 && (a != n || b != n)) {
      cout << "NO\n";
      return;
    } else {
      if (a % 2 == 1 || b % 2 == 1) {
        cout << "NO\n";
        return;
      }
    }
  }
  cout << "YES\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
