#include <bits/stdc++.h>

using namespace std;
void solve (){
   int n, points=0, pointsarow=0; cin >> n;
    string s; cin >> s;
    for (int i=0; i<n; i++){
      if (s[i]=='.') {points++;pointsarow++;}
      else {
        pointsarow=0;
      }
      if (pointsarow>=3){
        cout << "2\n";
        return;
      }
    }
    cout << points<<"\n";
}

int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--){

    solve();
  }

  return 0;
}