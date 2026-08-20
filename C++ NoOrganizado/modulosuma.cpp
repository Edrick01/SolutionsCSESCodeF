#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    long long k, a;
    cin >> n >> k;
    long long suma = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        suma += a%k;
    }
    cout << suma%k << "\n";
    return 0;

}
   