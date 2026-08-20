#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    long long n, x, res;
    cin >> t;
    while (t--) {
        cin >> n;
        res=0;
        vector <long long> a(n);
        cin >> x;
        for (long long i=0; i<n; i++){
            cin >> a[i];
        }
        long long inf=0, sup=2e10, mid;
        while (inf<=sup){
            mid=inf+(sup-inf)/2;
            long long sum=0;
            for (long long i=0; i<n; i++){
                if (a[i]<mid) sum+=(mid-a[i]);
                if (sum>x) break;
            }
            if (sum<=x){
                inf=mid+1;
                res=mid;
            }
            else{
                sup=mid-1;
            }
        }
        cout << res<< "\n";


    }
    
    return 0;
}
