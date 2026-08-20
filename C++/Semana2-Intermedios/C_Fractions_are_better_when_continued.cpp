#include <bits/stdc++.h>

using namespace std;

void solve () {
  int n, a=2, b=3, aux;
  cin >> n;
  if (n==1 || n==0) {
    cout << "1\n";
    return;
  }
  for (int i=2; i<n;i++){
    aux=a;
    a=b;
    b=aux+b;
  }
  cout << a << "\n";

}


int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  // int t; cin >> t;
  // while (t--)
  solve();
  
  return 0;
}