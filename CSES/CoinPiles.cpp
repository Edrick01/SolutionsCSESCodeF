#include <bits/stdc++.h>
using namespace std;
void solve () {
  long long a, b; cin >> a; cin >> b; 
  long long men, maxi;
  men=min(a, b); maxi=max(a, b);
  if (men*2<maxi){
    cout << "NO\n";
    return;
  }
  if ((a+b)%3){
    cout << "NO\n";
    return;
  }
  else {
    cout << "YES\n";
  }
  
}
int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) solve();
  return 0;
}