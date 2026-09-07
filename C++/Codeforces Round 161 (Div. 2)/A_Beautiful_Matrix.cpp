#include <bits/stdc++.h>


using namespace std;

int main () {
  ios::sync_with_stdio(0); cin.tie(0);

  int x1, y1;
  for (int i=0; i<5;i++)
    for (int j=0;j<5;j++){
      int a; cin >> a;
      if (a) {
        x1=j+1;
        y1=i+1;
      }
    }
  if (y1==3 && x1==3){
    cout << 0 << "\n";
  }
  else {
    int res= (x1==3 ? 0:abs(x1-3)) + (y1==3 ? 0:abs(y1-3));
    //x1==3 ? cout << 0:cout <<abs(x1-3);
    cout << res << "\n";
  }
  

  return 0;
}