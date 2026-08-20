#include <bits/stdc++.h>
using namespace std;

void solve () {
  string s; cin >> s;
  string st="";
  int n=s.length();
  //cout << n << "\n";
  for (int i=0; i<n; i++) {
    if(!(st.empty()) && st.back()=='0' && s[i]=='1') {
      st.pop_back();
    } else {
      st.push_back(s[i]);
    }
  }
  
  cout <<st.length()<<"\n"<< st << "\n";

}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  //int t; cin >> t;
  //while (t--) 
  solve();
  return 0;
}