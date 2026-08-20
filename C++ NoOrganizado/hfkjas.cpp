#include <bits/stdc++.h>
using namespace std;
mod(long long n, long long m){
        return (n) % m;
    }
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    double a, b, c, d;
    a=24;
    b=24/120;
    c=998244353;
    d=a*pow(b,-1)%c;
    cout << mod(a,c)<<d;
    return 0;
}