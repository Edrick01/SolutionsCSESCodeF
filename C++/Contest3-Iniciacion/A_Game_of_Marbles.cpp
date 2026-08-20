#include <bits/stdc++.h>

using namespace std;

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, odd=0, even=0; 
  cin >> n;

  while (n--) {
    int a;
    cin >> a;
    if (a % 2) odd++;
    else even++;

  }
  if (odd >= even) cout << "Notbastian\n";
  else cout << "Sebastian\n";

  return 0;
}