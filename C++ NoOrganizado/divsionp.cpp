#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t, r;
  cin >> t;
  while (t--) {
    cin >> r;
    if (r < 1400)
      cout << "Division 4\n";
    else if (r < 1600)
      cout << "Division 3\n";
    else if (r < 1900)
      cout << "Division 2\n";
    else
      cout << "Division 1\n";
  }

  return 0;
}
