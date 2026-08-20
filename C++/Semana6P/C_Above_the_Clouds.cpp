#include <bits/stdc++.h>
using namespace std;

void solve () {
  int n;
  cin >> n;
  vector<char> v(n);
  map <int, int> m;
  char s, first, last, aux;
  for (int i =0; i<n; i++){
    cin >> s;
    m[s]++;
    if (i==0) first = s;
    if (i==n-1) last = s;
  }
  if ((first == last) && (m[first]>2)) {
    //cout <<"iguales\n";
    cout << "Yes\n";
    return;
  }
  else if ((first != last) && (m[first]>1 || m[last]>1)) {
    //cout <<"diferentes\n";
    cout << "Yes\n";
    return;
  }
  else {
    for (auto const& [llave, valor] : m) {
      if (valor > 1 && llave != first && llave != last) {
        //cout <<"ultimo caso\n"<<valor<<"\n";
        cout << "Yes\n";
        return;
      }
    }
  }
  cout << "No\n";
}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) 
  solve();
  return 0;
}