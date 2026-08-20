#include <bits/stdc++.h>
using namespace std;

void solve () {
  string s; cin >> s;
  stack <char> st;
  for (int i=0; i<s.length(); i++) {
    if (s[i]=='(') {

      st.push(s[i]);
      
    }  else {
      if (st.empty()) {
        cout << "NO\n";
        return;
      }
      st.pop();
    }
  }
  if (st.empty()) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
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