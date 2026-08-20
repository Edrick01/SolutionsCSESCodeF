#include <bits/stdc++.h>
using namespace std;

void solve () {
  int n, a, sum=0; cin >> n;
  int l=n;
  while (l--) {
    cin >> a;
    sum += a;
  }
  if (sum%n){
    for (int i=n-1; i>=1; i--) {
      
      if (sum%i==0){
        cout << n-i << "\n";
        break;
      }
    }
  }
  else cout << 0 << "\n";
  
}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  //int t; cin >> t;
  //while (t--) 
  solve();
  return 0;
}