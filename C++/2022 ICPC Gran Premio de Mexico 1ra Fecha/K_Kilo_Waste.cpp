#include <bits/stdc++.h>
using namespace std;

void solve () {
  int k, p; cin >> k >> p;
  vector<int> a;
  for (int i=0; i<p; i++){
    int x; cin >> x;
    a.push_back(x);
  }
  int maximodearroz=50105;
  vector<bool> sumasposibles(maximodearroz, false);
  sumasposibles[0]=true;
  int aux=0;
  for (int i=0; i<=50000; i++){
    if (sumasposibles[i]){
      for (int j: a){
        if (i+j<=maximodearroz){
          sumasposibles[i+j]=true;
        }
      }
    }
  }
  
  for (int i=0; i<k; i++){
    int x; cin >> x;
    int ola=x;
    while (!sumasposibles[ola]){
      ola++;
    }
    cout << ola-x << "\n";
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