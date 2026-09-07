#include <bits/stdc++.h>

using namespace std;

int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  //vector <int> a;
  //vector <int> c;
  //vector <int> comp;
  int res=0;
  //int cont=0;
  //vector<bool> b(101);
  for (int i=0; i<5; i++){
    int x; cin >> x;
    res+=x;
  }
  for (int i=0; i<4; i++){
    int x; cin >>x;
    res-=x;
  }
  cout << res << "\n";

  
  


  return 0;
}