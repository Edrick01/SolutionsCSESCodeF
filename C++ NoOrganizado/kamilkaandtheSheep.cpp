#include <bits/stdc++.h>
using namespace std;    
int main () {
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int t, n;
long long a, maxi, mini;
maxi=0;
mini=0;

cin >> t;
while (t--){
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a;
        if (a>maxi || i==0){
            maxi=a;
        }
        if (a<mini || i==0){
            mini=a;
        }
    }
    
    cout << maxi-mini << "\n";

}

return 0;
}
    