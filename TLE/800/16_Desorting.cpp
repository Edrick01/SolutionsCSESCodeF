#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--){
        int n, idxmn,idxmy; cin >> n;
        vector <long long> a(n);
        long long minres=1e9+7;
        bool isSorted=false;
        for (int i=0; i<n; i++){
            cin>> a[i];
            if (i>0){
                if (a[i-1]>a[i]){
                    isSorted=true;
                }
                if (abs(a[i-1]-a[i])<minres){
                    minres=abs(a[i-1]-a[i]);
                    idxmn=i-1;
                    idxmy=i;
                }
            }
        }
        if (isSorted) cout << "0\n";
        else{
            int res=(minres/2)+1;
            cout << res<<'\n';
        }
        
    }
 
    return 0;
}