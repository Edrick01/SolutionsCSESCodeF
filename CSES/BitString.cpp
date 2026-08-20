#include <bits/stdc++.h>
using namespace std;

long long binpow(long long a, long long b) {
    long long res = 1;
    long long MOD = 1e9 + 7;
    
    a %= MOD;
    while (b > 0) {
        if (b & 1) {
            res = (res * a) % MOD; 
        }
        a = (a * a) % MOD;
        b >>= 1; 
    }
    
    return res;
}

int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  long long n; cin >> n;
  
  cout << binpow(2, n) << "\n";
  return 0;
}