#include <bits/stdc++.h>

using namespace std;

int main () 
{
  ios::sync_with_stdio(0); cin.tie(0);
  long long n;
  cin >> n;
  long long ans=0;
  while (n>=5){
    n/=5;
    ans+=n;
    
  }
  cout << ans << "\n";

}