#include <bits/stdc++.h>

using namespace std;
void solve(){
  long long n; cin >> n;
  vector <long long> a(n);
  for (int i=0; i<n; i++){
    cin >> a[i];
  }
  long long q; cin >> q;
  while (q--){
    long long l, k; cin >> l >> k;
    long long left=l-1, right=n-1; 
    long long res=l-1;
    while (left<=right){
      long long restr=0;
      long long mid = (left+right) /2;
      long long aux=a[l-1] & a[mid];
      cout << a[l]<<" " << a[mid] << "mid:" << mid<<" "<<" "<< aux << " \n";
      if (aux>=k){
        res=mid+1;
        left=mid+1;
      }
      else {
        right=mid-1;
      }
    }
    cout << res << " ";
  }
  cout << "\n";

}
int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) solve();
  return 0;
}