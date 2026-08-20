#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>

void solve(){
    ll n; cin >> n;
   
    // Es impar
    if(n & 1){
        cout << -1 << '\n';
        return;
    }

    // Otra forma de encontrar el primer Bit
        ll aux = n/2;
        ll cont = 0;
        while (!(aux & 1))
        {
            cont ++;
            aux >>= 1;
        }
        ll ans = (long long)1<<cont;
    // Otra forma de encontrar el primer Bit

    // Respuesta
    ll last_bit = ((n / 2) & -(n / 2)); 

    ll A = n/2;    
    ll B = n/2 - last_bit;
    ll C = n + last_bit;

    cout << A << ' ' << B << ' ' << C << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t; cin >> t; while(t--) solve();
}
