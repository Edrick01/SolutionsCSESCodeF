#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve () {
    int n;
    long long res=0;
    cin >> n;
    vector<int> c(2*n + 1,0);
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            int a;
            cin >> a;
            int idx;
            idx = i-j+n;

            if (a<0) c[idx] = min(c[idx], a);
        }

    } 
    for (int i = 0; i<2*n+1; i++) res += abs(c[i]);
    
    cout << res << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin>>t; while (t--)
    solve();
    

    return 0;
}

