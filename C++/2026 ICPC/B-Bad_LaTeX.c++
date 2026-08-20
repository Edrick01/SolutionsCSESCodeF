#include <bits/stdc++.h>
using namespace std;

void solve () {
  int n; cin >> n;
  vector <string> v;
  for (int i = 0; i < n; i++) {
    string s;
    getline(cin, s);
    v.push_back(s);
  }
  for (int i = 0; i < n; i++) {
    string s = v[i];
    for (int j=0; j<s.size(); j++){
      if(isalpha(s[j])){
        
      }
    }
    
  }
}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  //int t; cin >> t;
  //while (t--) 
  solve();
  return 0;
}