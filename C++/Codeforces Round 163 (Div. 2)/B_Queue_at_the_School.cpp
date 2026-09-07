#include <bits/stdc++.h>

using namespace std;

int main () {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, t; cin >> n >> t;
  string s, s2; cin >> s; s2=s;
  for (int i=0; i<t; i++){
    for (int j=1; j<n; j++){
      if (s[j]=='G' && s[j-1]=='B'){
        s2[j-1]='G'; s2[j]='B';
      }
      else {
        s2[j]=s[j];
      }
    }
    s=s2;
  }
  cout << s2 << "\n";
  return 0;
}