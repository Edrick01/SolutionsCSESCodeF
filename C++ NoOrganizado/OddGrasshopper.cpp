#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long x, n, res=0,rest=0;
    int t;
    cin >> t;
    for (int i=0; i<t; i++) { 
        cin >> x >> n;
        rest=n%4;
        if (n==0 || rest==0) {
            cout << x << "\n";
        }
        else {
             for (long long j=n-rest; j<n; j++) {
             if (x%2==0 || x==0) {
            res=x-(j+1);
            x=res;
            cout <<x<< "  ";
            
        } else {
            res=x+j+1;
            x=res;
           cout <<x<< "  "; 
        }

        }
        cout << res << "\n";
        res=0;


        }   

       
        
    }
    return 0;
}