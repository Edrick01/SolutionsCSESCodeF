#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t, n, m,filaimp=0,columimp;
    cin >> t;
    while (t--) {
        filaimp=0;
        columimp=0;
        cin >> n >> m;
        vector<vector<char>>binma(n,vector<char>(m));
        vector<int>unf(max(n,m));
        vector<int>unc(max(n,m));
        for (int i=0; i<n;i++){
            for (int j=0; j<m; j++){
                cin >> binma[i][j];
                if (binma[i][j]=='1'){
                    unf[i]+=1;
                    unc[j]+=1;
                    
                }
                


            }
            if (unf[i]%2!=0){
                filaimp+=1;
            }
        }
        for (int i=0; i<m;i++){
            if (unc[i]%2!=0){
                columimp+=1;
            }
        }
        cout << max(filaimp, columimp) << " \n";



    }


    
    return 0;
}