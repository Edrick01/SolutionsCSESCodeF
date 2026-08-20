#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;

        vector<char> v(n);
        string ordenado = "";
        string resultado = "";
        set<char> s;

        for (int i = 0; i < n; i++){
            cin >> v[i];
            s.insert(v[i]);
        }
        
        for (char c : s) {
            ordenado += c; 
        }
        
        
        vector<char> cambio(256);

        int tamanomax = ordenado.length();
        for (int i = 0; i < tamanomax; i++){
            cambio[ordenado[i]] = ordenado[tamanomax - 1 - i];
        }
        
        for (int i = 0; i < n; i++){
            resultado += cambio[v[i]]; 
        }
        
        
        cout << resultado << "\n";
    }
    return 0;
}