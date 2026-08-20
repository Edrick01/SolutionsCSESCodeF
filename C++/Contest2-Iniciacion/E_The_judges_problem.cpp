#include <bits/stdc++.h>
using namespace std;

void solve () {
  int n=10,a, may=0;;
  vector<short int> v(11,0);
  for (int i=0;i<n;i++) {
    cin >> a;
    v[a]++;
  }
  for (int i=1; i<=n;i++){
    //cout << v[i] << " "<< i <<" " << may << "\n";
    if (v[i]>=may) {
      may=v[i];
      a=i;
      //cout <<v[i] << " " << may << "\n";
    }
  }
  cout << a << "\n";

}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  //int t; cin >> t;
  //while (t--) 
  solve();
  return 0;
}