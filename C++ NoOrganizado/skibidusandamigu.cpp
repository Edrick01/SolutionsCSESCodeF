#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  string w;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> w;
    int longitud = w.length();
    longitud -= 2;
    w.erase(longitud, 2);
    w += "i";
    cout << w << "\n";
  }

  return 0;
}
