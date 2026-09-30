//Complete
#include <bits/stdc++.h>

using namespace std;

int main () {
  ios::sync_with_stdio(0); cin.tie(0);

  int t; cin >> t;
  while (t--){
    int n, sum=0; cin >> n;
    bool possible=false;
    for (int i=0; i<n-1; i++){
      int x; cin >> x;
      //cout << x << "\n";
      sum+=x;
    }
    cout << sum*(-1) << "\n";
  }
  return 0;
}