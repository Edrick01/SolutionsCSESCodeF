#include <bits/stdc++.h>

using namespace std;
const int LM=1000000;
int camino (int x, int y, int xp, int yp) {
  if (x<xp) return 1;
  if (x>xp) return 2;
  if (y<yp) return 3;
  if (y>yp) return 4;
  return 1;
}

pair<int,int> salida (int x, int y, int p){
  if (p==1) return {-LM,y};
  if (p==2) return {LM,y};
  if (p==3) return {x,-LM};
  if (p==4) return {x,LM};
  return {0,0};
}



void solve () {
  int xs, ys, xt, yt, xp, yp; 
  cin >> xs >> ys >> xt >> yt >> xp >> yp;
  int p1=camino(xs,ys,xp,yp);
  int p2=camino(xt,yt,xp,yp);

  vector<pair<int,int>> v;

  v.push_back(salida(xs,ys,p1));

  if ((p1 + p2 == 3) || (p1 + p2 == 7)){
    v.push_back(salida(LM,LM,p1));
    v.push_back(salida(LM,LM,p2));
  }
  else if (p1 != p2) {
    int cx, cy;
 
    if (p1 <= 2) cx = (p1 == 1 ? -LM : LM);
    else cx = (p2 == 1 ? -LM : LM);

    if (p1 >= 3) cy = (p1 == 3 ? -LM : LM);
    else cy = (p2 == 3 ? -LM : LM);
    
    v.push_back({cx, cy});
  }

  v.push_back(salida(xt,yt,p2));

  cout << v.size() << "\n";
  for (auto i:v) cout << i.first << " " << i.second << "\n";
}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  //int t; cin >> t;
  //while (t--) 
  solve();
  return 0;
}