#include <bits/stdc++.h>
using namespace std;
  
int main (){
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--)
  {
    int a, b, c; cin >> a >> b >> c;
    if (c%2){
      if (a>=b) cout << "First\n";
      else cout << "Second\n";
    }
    else {
      if (a>b) cout << "First\n";
      else cout << "Second\n";
    }
    
  }
    

  return 0;
}