#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve () {
  ll x, n;
  cin >> x >> n;
  int d = n%4;
  if (!d) {
    cout << x <<"\n";
    return;
  }
  ll pos=((x%2)+2)%2;
  if (pos){
    switch (d) {
      case 1: 
      cout<<x+n<<"\n";
      break;
      case 2: 
      cout << x-1<<"\n";
      break;
      case 3:
      cout << (x-(n+1))<<"\n";
      break;
    }
  }
  else {
    switch (d) {
      case 1: 
      cout<<x-n<<"\n";
      break;
      case 2: 
      cout << x+1<<"\n";
      break;
      case 3:
      cout << x+(n+1)<<"\n";
      break;
    }
  }
}


int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--)
  solve();
  
  return 0;
}