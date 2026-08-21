#include <bits/stdc++.h>

using namespace std;

int main () {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  if (n*(n+1)/2%2){
    cout << "NO\n";
    return 0;
  }
  else {
    cout << "YES\n";
    if (n%2==0){
      int xix=0;
      cout << n/2 << "\n";
      for (xix=1; xix<=n/4; xix++){
        cout << xix << " " << n-xix+1 << " ";
      }
      cout << "\n";
      cout << n/2 << "\n";
      for (; xix<=n/2; xix++){
        cout << xix << " " << n-xix+1 << " ";
      }
      cout << "\n";
    }
    else {
      vector <bool> a(n+2,false);
      int xix=0;
      cout << n/2 + 1 << "\n";
      for (xix=1; xix<=n/4; xix++){
        cout << xix << " " << n-xix+1 << " ";
        a[xix] = true;
        a[n-xix+1] = true;
      }
      cout << xix << " " << xix*2<<"\n";
      a[xix] = true;
      a[xix*2] = true;
      cout << n/2 << "\n";
      for (int i=1; i<=n; i++){
        if (!a[i]){
          cout << i << " ";
        }
      }
      cout << "\n";
    }
  }


  return 0;
}