#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--){
      bool possible=false;
      int number;
        int n, k , x;cin >> n >> k >> x;
      for (int i=1; i<=k; i++){
        if (i==x) continue;
        if(n%i==0) {
          possible=true;
          number=i;
          break;
        }
      }
      if (possible) {
        cout << "YES\n" << n/number << '\n';
        for (int i=0; i<(n/number); i++) cout << number << " ";
        cout << '\n';
      }
      else {
        if (k==1 || k==2 && n%2!=0) cout << "NO\n";
        else{
          cout<< "YES\n";
          cout << (n-3)/2 +1 << '\n';
          cout << 3 << " ";
          for (int i=0; i<(n-3)/2;i++){
            cout << 2 << " ";
          }
          cout << "\n";
        }
      }
    }
    return 0;
}