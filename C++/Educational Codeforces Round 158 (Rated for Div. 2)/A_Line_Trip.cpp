#include <bits/stdc++.h>

using namespace std;
bool isPossible (vector<bool> &a, int m, int dist){
  int fuel=m, i=0, auxi=0;
  //cout << "gasolina total usada: "<<m<<"\n";
  while (i<2*dist){
    i++;
    i>dist && auxi>0 ? auxi--: auxi++;
    if (a[auxi]){
      //cout << "rellenado \n";
      fuel=m;
    }
    else {
      fuel--;
    }
    //cout << "gasolina restante: " << fuel<<" distrec" << i <<"\n";
    //cout << " auxi " << auxi << "\n";
    if (fuel==0 && a[auxi]==false && i!=2*dist) return false;
  }
  return true;
}
int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin>>t;
  while (t--){
  int right=100000, left=1;
  int n , x; cin >> n >> x;
  vector <bool> a (x+1);
  for (int i=0; i<n; i++){
    int b; cin >> b;
    a[b]=true;
  }
  int mid, res=0;
  while (left<=right){
    mid=(left+right)/2;
    int cont=0;
    if (isPossible(a,mid,x)) {
      right=mid-1;
      res=mid;
    }
    else {
      left=mid+1;
    }
  }
  cout << res << "\n";
  }
  return 0;
}