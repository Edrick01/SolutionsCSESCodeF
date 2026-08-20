#include <bits/stdc++.h>
using namespace std;

int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  for (int i=1; i<=n; i++){
    long long a=(i*i)*(i*i-1)/2;
    long long b=4*(i-1)*(i-2);
    long long res=a-b;
    cout << res << "\n";
  }
  return 0;
}