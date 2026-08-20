#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    ll n;
    cin >> t;
    while (t--) {
        //cout << t << "\n";
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll inf=0, sup=2e9, mid, res=0;
        while (inf<=sup){
            mid=inf+(sup-inf)/2;
            ll grupos=1, actual=0;
            for (ll i=0; i<n; i++){
                //cout << "mid: " << mid << " grupos: " << grupos << " actual: " << actual << " "<<a[actual]<< " comparacion "<<a[i]<< " "<< a[actual]+2*mid << " i: " << i << "\n";
                if (a[i]>(a[actual]+2*mid)){
                    grupos++;
                    actual=i;
                } 
            }
            //cout << "final grupos: " << grupos << "\n";
            if (grupos<=3){
                res=mid;
                sup=mid-1;
            }
            else{
                inf=mid+1;
            }
            //cout << res << "\n";
        }
        cout << res << "\n";
    }
    return 0;
}