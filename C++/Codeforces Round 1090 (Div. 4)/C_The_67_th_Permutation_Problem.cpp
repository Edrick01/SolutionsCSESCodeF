#include <bits/stdc++.h>
using namespace std;

void solve () {
  long long n, numpeque=1; cin >> n;
  long long cont2=n+2;
  for (long long i=1; i<=n; i++){
    cout << numpeque << " ";

    cout << cont2 << " ";
    numpeque++;
    cont2--;
    cout << cont2 << " ";
    cont2+=3;  
  }
  cout << "\n";

}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) 
  solve();
  return 0;
}