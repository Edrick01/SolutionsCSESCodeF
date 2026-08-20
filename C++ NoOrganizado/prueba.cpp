#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    cin >> n;
    int a, sum,sum2;
    sum = 0;
    sum2 = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        sum ^= a;
    }
    for (int i = 0; i < n; i++) {
        cin >> a;
        sum2 ^= a;
    }
    cout << (sum ^ sum2) << endl;

    return 0;
}