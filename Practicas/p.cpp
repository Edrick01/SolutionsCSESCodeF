#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
using namespace std;
using ll = long long;
using vll = vector<ll>;
using pll = pair<ll, ll>;
using vch = vector<char>;
using vbo = vector<bool>;
using vpll = vector<pair<ll,ll>>;
using mll = vector<vll>;
 
void dfs(ll nodo, mll& adj, vbo& visited, ll& contador);


int main() {
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll t; cin >> t;
    while (t--) {

        ll n; cin >> n;

        mll adj(n);
        vbo visited(n);
        for (ll i = 0; i < n - 1; i++) {

            ll a, b; cin >> a >> b;
            a --; b --;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        ll contador = 0;
        for (ll i = 0; i < n; i++) {
            if (visited[i]) continue;
            dfs(i, adj, visited, contador);
        }
        cout << contador << "\n";


    }
    return 0;
}


void dfs(ll nodo, mll& adj, vbo& visited, ll& contador) {
    visited[nodo] = true;
    //contador += 1;
    bool atamata = true;
    //cout << " " << " ";
    for (ll nodoVecino : adj[nodo]) {
        if (!visited[nodoVecino]) {atamata=false, dfs(nodoVecino, adj, visited, contador);}
        if(!atamata){contador++;}
    }
}