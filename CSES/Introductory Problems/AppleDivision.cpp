#include <bits/stdc++.h>

using namespace std;

int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  vector <long long> v (n);

  for (int i = 0; i < n; ++i){

    cin >> v[i];

  }
  sort (v.begin(), v.end());
  long long summin=0, summax=v[n-1], res=100000000007;
  for (int i = 0; i < n-1; ++i){
    summin += v[i];
  }
  for (int i = 0; i < n-1; ++i){
    //cout << res << " " << abs(summin-summax);
    if (res > (abs(summin-summax))){
      res = abs(summin-summax);
    }
    //else {
    //  cout << res << "\n";
    //  break;
    //}
    summin-=v[i];
    summax+=v[i];
  }
  cout << res << "\n";
  return 0;
}