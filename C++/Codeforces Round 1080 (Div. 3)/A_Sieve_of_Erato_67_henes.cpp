#include <bits/stdc++.h>
using namespace std;

void solve () {
  int n, number, number67counter=0;
  cin >> n;
  for (int i=0; i<n; i++){
    cin>> number;
    if (number == 67) number67counter++;
  }
  if (number67counter) cout << "YES\n";
  else cout << "NO\n";
}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) 
  solve();

}