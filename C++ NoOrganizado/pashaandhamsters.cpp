#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, a, b, ar, alex;
    cin >> n>> a>> b;
    vector<int>d(n+1,0);
    for (int i=0; i<a; i++){
        cin >> ar;
        d[ar]=1;
        
    }
    for (int i=0; i<b; i++){
        cin >> alex;
        if (d[alex]==0){
            d[alex]=2;
        }
    }
    for (int i=1; i<=n;i++){
        cout << d[i] <<" ";
    }
    return 0;
}