#include <bits/stdc++.h>

using namespace std;
bool isSorted(vector<int>&a){
  for (int i=0; i<a.size()-1; i++){
    if (a[i]>a[i+1]){
      return false;
    }
  }
  return true;
}

int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n, k; cin >> n >> k;
    vector <int> a(n);
    for (int i=0; i<n; i++){
      cin >> a[i];
    }
    if (k==1 && isSorted(a)) cout << "YES\n";
    else if (k!=1) cout << "YES\n";
    else cout << "NO\n";
  }

  return 0;
}