#include <bits/stdc++.h>

using namespace std;

int main () 
{
  ios::sync_with_stdio(0); cin.tie(0);
  long long n, sum=0; cin >> n;
  vector<long long> a(n);
  for (int i=0; i<n; i++){
    cin >> a[i];
  }
  
  for (int i=1; i<n; i++){
    if (a[i]<a[i-1]){
      sum+=a[i-1]-a[i];
      a[i]=a[i-1];
    }
  }
  
  cout << sum << "\n";
  return 0;
}