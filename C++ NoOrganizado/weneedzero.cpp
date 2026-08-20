#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,n;
    cin>>t;
    while(t--){
        cin >> n;
        vector<int>a(n);
        int ans=0;
        for(int i=0;i<n;i++){cin>>a[i]; ans^=a[i];
        }
        if (n%2==1) cout << ans << "\n";
        else {
            if (ans==0) cout << "0\n";
            else cout << "-1\n";
        }
    }
    
    return 0;
}