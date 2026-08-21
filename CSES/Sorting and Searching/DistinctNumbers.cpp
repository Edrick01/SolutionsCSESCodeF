#include <bits/stdc++.h>

using namespace std;

int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, ndiferent=0; cin >> n;
  vector <bool> v(1000000009,false);
  for (int i=0; i<n; i++){
    long long a; cin >> a;
    if (v[a]!=true){
      v[a]=true;
      ndiferent++;
    }
  }
  cout << ndiferent << "\n";
  return 0;
}