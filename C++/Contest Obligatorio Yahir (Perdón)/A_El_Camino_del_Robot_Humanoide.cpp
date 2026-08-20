#include <bits/stdc++.h>
using namespace std;

void solve () {
  int  n, cont=0; cin >> n;
  for (int i=0; i<n; i++) {
    char a; cin >> a;
    if (a=='L') cont--;
    else if (a=='R') cont++;
  }
  
  if (cont<0){
    cout<< "Izquierda\n";
  }
  if (cont>0){
    cout << "Derecha\n";
  }
  if (cont==0){
    cout << "Linea Recta\n";
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