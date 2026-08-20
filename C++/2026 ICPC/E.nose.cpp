#include <bits/stdc++.h>
using namespace std;
const int MAX = 1000001;
bool es_primo[MAX];
void criba() {
fill(es_primo, es_primo + MAX, true);
  es_primo[0] = es_primo[1] = false;
  for (int p = 2; p * p < MAX; p++) {
    if (es_primo[p]) {
      for (int i = p * p; i < MAX; i += p) es_primo[i] = false;
    }
  }
}

void solve () {

}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  //int t; cin >> t;
  //while (t--) 
  solve();
  return 0;
}