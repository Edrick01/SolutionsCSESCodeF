#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
long long a, b, c, d, t,men,maxi,lon;
    cin >> t;
    for (int i=0;i<t;i++){
cin >> a>>b>>c>>d;
        if (a>c){
          maxi=a;
    }
    else {
        maxi=c;
    }
    if (b<d){
        men=b;
    }
    else {
        men=d;
    }
    lon=men-maxi;
    if (lon<0){
        cout << 0 <<"\n";
    }
    else {
        cout << lon << "\n";
    }
    

        
}
return 0;
}