#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    long long x;
    cin >> x;
    int i=0;
    vector<long long> arr(n);
    for (int i=0; i<n; i++) cin >> arr[i];

    long long totalSum = 0, cont=0, cont2=0;

    while (i<=n) {
        totalSum += arr[i];
        if (totalSum == x) {
            cont++;
            cont2++;
            totalSum = 0;
            i=cont2;
            continue;
        } else if (totalSum > x) {
            totalSum = 0;
            cont2++;
            i=cont2;
            continue;
        }
        i++;
    }
    cout << cont << "\n";

    return 0;
}