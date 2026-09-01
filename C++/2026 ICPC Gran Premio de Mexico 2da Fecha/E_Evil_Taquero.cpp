#include <bits/stdc++.h>

using namespace std;

int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  string s; cin >> s;
  string res="";
  for (int i=0; i<s.size(); i++){
    if (s[i]=='m' && i+5<s.size() && s[i+1]=='e' && s[i+2]=='s' && s[i+3]=='e' && s[i+4]=='r' && s[i+5]=='o'){
    res+="taquero";
    i+=5;
    }
    else res+=s[i];
  }

  cout << res;
  return 0;
}
