#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i=0; i<n; i++) cin >> arr[i];
    long long cont = 0, pre=0, needed;
    map<long long, int>check;
    check[0] = 1;
    for (int i=0; i<n; i++) {
        pre += arr[i];
        
        needed = ((pre % n)+n) % n;

        if (check.count(needed)) {
            cont += check[needed];
        }
        check[needed]++;

    }
    cout << cont << "\n";
    return 0;
}