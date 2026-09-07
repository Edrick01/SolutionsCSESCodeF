#include <bits/stdc++.h>

using namespace std;

int main () {

  int n; cin >> n;
  int x, y, z, sumx=0, sumy=0, sumz=0;
  
  for (int i=0; i<n; i++){
    cin >> x >> y >> z;
    sumx+=x;
    sumy+=y;
    sumz+=z;
  }
  if (sumx || sumz ||sumy){
    cout << "NO\n";
  }
  else {
    cout << "YES\n";
  }
  return 0;
}