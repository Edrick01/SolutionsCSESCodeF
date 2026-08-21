#include <bits/stdc++.h>

using namespace std;

int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, m; cin >> n >> m;
  multiset<long long> ticketprice;
  for (int i=0; i<n; i++){
    long long tp; cin >> tp;
    ticketprice.insert(tp);
  }
  for (int i=0; i<m; i++){
    long long a; cin >> a;
    auto it = ticketprice.upper_bound(a);
    if (it == ticketprice.begin()){
      cout << -1 <<"\n";
    }
    else {
      --it;
      cout << *it<< "\n";
      ticketprice.erase(it);
    }
  }
  
  return 0;
}