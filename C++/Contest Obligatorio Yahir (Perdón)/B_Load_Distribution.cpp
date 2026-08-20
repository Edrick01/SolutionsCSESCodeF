#include <bits/stdc++.h>
using namespace std;

void solve () {
  int n, s; cin >> n >> s;
  char a; cin >> a;
  
  int conta, contb, contc;
  conta=contb=contc=0;
  if (a=='L'){
    conta=(s-1)/2+1;
    contb=(s-1)/2+1;
    contc=n-s;
  }
  else {
    contc=(n-s)/2+1;
    contb=(n-s)/2+1;
    conta=s-1;
  }
  cout <<conta<<" "<<contb<<" "<<contc<<"\n";
}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  //int t; cin >> t;
  //while (t--) 
  solve();
  return 0;
}