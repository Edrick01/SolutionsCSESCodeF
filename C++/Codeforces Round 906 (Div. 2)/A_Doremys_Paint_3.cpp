#include <bits/stdc++.h>

using namespace std;
int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--){
    int n, cont=0; cin >> n; bool possible = false;
    vector <bool> a (1000000);
    map<int,int> b;
    vector <int> c;
    for (int i=0; i<n; i++){
      int x; cin >> x;
      b[x]++;
      if (a[x]!=true) {//cout << "numero diferente"<< x << cont+1;
        cont++; c.push_back(x);a[x]=true;
      }
      
    }
    if (cont>2) cout << "NO\n";
    else if (cont==2) {
      int res=0;
      if (n%2){
        res=abs(b[c[0]]-b[c[1]]);
        //cout << res <<"\n";
        if (res==1) possible=true;

      }
      else {res=b[c[0]]-b[c[1]]; if (res==0) possible=true;}
      if (possible) cout << "YES\n";
      else cout << "NO\n";
    }
    else {
      cout << "YES\n";
    }
    
  }

  return 0;
}