#include <bits/stdc++.h>
using namespace std;

/*long long binpow(long long a, long long b, long long m) {
    long long res = 1; a %= m;
    while (b > 0) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b /= 2;
    }
    return res;
}*/

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    long long n;
    cin >> n;
    cout << 25/*binpow(5, n, 100) */<< "\n";
    
    return 0;
}