#include <bits/stdc++.h>
using namespace std;

void solve () {
  int a, c1=1,c2=1,c3=1,c4=1;
  for (int i=0; i<10; i++) {
    cin >> a;
    if (a==1) c1=0;
    else if (a==2) c2=0;
    else if (a==3) c3=0;
    else c4=0;
  }
  cout << (c1+c2+c3+c4) << "\n";

}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  //int t; cin >> t;
  //while (t--) 
  solve();
  return 0;
}