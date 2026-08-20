#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a, b, c;

  cin >> n >> a >> b >> c;

  if (n > a || n > b || n > c)
    cout << 0 << "\n";

  else
    cout << (a / n) * (b / n) * (c / n) << "\n";

  return 0;
}
