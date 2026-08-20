#include <bits/stdc++.h>
using namespace std;

void solve () {
  string s; cin >> s;
  int n=s.length();
  
  if (s.length() % 2 != 0) {
    cout << "No\n";
    return;
  }
  string sstack="";
  for (int i=0; i<s.length();i++){
    if (!sstack.empty() && sstack.back()==s[i]){
      sstack.pop_back();
    }
    else {
      sstack.push_back(s[i]);
    }
  }
  if (sstack.empty()) {
    cout << "Yes\n";
  }
  else {
    cout << "No\n";
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