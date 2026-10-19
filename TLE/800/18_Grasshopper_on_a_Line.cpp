#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--){
     int x, k; cin >> x >> k;
      if (x%k!=0) cout << "1\n"<<x<<'\n';
      else {
        if ((x-1)%k!=0){
          cout << "2\n"<<(x-1)<< " "<< 1 << '\n';

        }
        else {
          cout << "2\n"<<(x+1)<< " "<< -1 << '\n';

        }
      }
    }
    return 0;
}