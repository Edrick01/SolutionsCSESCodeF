#include <bits/stdc++.h>

using namespace std;

int main () 
{
  ios::sync_with_stdio(0); cin.tie(0);
  string s; cin >> s;
  long long cont=1, maxcont=1;
  for (long long i=1; i<s.size(); i++){
    if (s[i]==s[i-1]) cont++;
    else {
      maxcont=max(maxcont, cont);
      cont=1;
    }
  }
  maxcont=max(maxcont, cont);
  cout << maxcont << "\n";
  return 0;
}