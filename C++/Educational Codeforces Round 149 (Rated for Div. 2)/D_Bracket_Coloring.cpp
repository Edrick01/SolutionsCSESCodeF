#include <bits/stdc++.h>

using namespace std;

int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--){
    string s; cin >> s;
    string res ="";
    int n; n=s.size();

    if (n%2) continue;
    int contizq = 0, contder = 0;
    for (int i=0; i<n; i++){
      
      if (s[i]==')'){
        contizq++;
      }
      if (s[i]=='('){
        contder++;
      }
    }
    if (contder!=contizq) continue;
        for (int i=0; i<n; i++){
      
      if (s[i]==')'){
        contizq++;
      }
      if (s[i]=='('){
        contder++;
      }
    }
  }
  return 0;
}