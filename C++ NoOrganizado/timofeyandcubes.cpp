#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    vector<long long> cubes(n);
    for (int i=0; i<n; i++) cin >> cubes[i];
    for (int i=0;i<n/2;i++){
        if ((i+1)%2!=0) swap(cubes[i], cubes[n-1-i]);
    }
    for (int i=0;i<n;i++) cout << cubes[i] << " ";
    return 0;
}