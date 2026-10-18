#include <bits/stdc++.h>

using namespace std;

int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--)
  {
    int n; cin >> n;
    //cout<<n << '\n';
    int ant;
    vector<int>res;
    for (int i=0; i<n; i++){
      int a; cin >> a;
      if(i!=0 && ant>a){
        res.push_back(1);
      }
      ant=a;
      res.push_back(a);
    }
    cout << res.size() << '\n';
    for (int i=0; i<res.size(); i++) cout << res[i] << ' ';
    cout << '\n';
  }
  

  return 0;
}