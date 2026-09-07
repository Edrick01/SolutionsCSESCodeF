#include <bits/stdc++.h>

using namespace std;

int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  string s, res; cin>>s;
  for (int i=0; i<s.size(); i++){
    if (s[i]=='-' && s[i+1]=='-'){
      res.push_back('2'); i++;
    }
    else if (s[i]=='-' && s[i+1]=='.'){
      res.push_back('1'); i++;
    }
    else if (s[i]=='.'){
      res.push_back('0');
    }
  }
  cout << res <<"\n";
  return 0;
}