#include <bits/stdc++.h>

using namespace std;

int main () 
{
  ios::sync_with_stdio(0); cin.tie(0);
  long long n, sum=0, sum2=0; cin >> n; 
  for (long long i=1; i<=n; i++) sum+=i;
  for (long long i=1; i<n; i++){
    long long x; cin >> x;
    sum2+=x;
  }
  cout << sum - sum2 << "\n";
  
  return 0;
}