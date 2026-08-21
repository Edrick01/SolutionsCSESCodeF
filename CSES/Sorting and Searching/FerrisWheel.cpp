#include <bits/stdc++.h>

using namespace std;

int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, x; cin >> n >> x;
  vector <long long> a(n);
  long long sum=0, res=0;
  for (int i=0; i<n; i++){
    cin >> a[i];
  }
  sort (a.begin(), a.end());
  int i=0, j=n-1;

  while (i<=j){
    if (i==j){
      res++;
      break;
    }
    if (a[i]+a[j]<=x) i++;
    j--;
    res++;
  }

  
  cout  <<res<<"\n";
  return 0;
}