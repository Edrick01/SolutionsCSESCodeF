#include <bits/stdc++.h>
using namespace std;

int main () {

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    int n;
    while (t--){

        
        cin >> n;
        vector<int> v(n);
        for (int i=0;i<n;i++){
            cin >> v[i];
        }



    
        if (n % 2 == 1) {
            cout << "YES\n";
            continue; 
        }

        // si n es par necesitamos analizar los números
        sort(v.begin(), v.end());

        bool gana = false;

        
        for (int i = 0; i < n; ++i) {
            
            // Si ya checamos este número, lo saltamos
            //    (ej. en [1, 2, 2, 2], solo queremos checar el '2' una vez)
            if (i > 0 && v[i] == v[i-1]) {
                continue;
            }

            // encontrar el primer subjuego, por ejemplo en [1, 2, 2, 3, 4], si i=2 (v[i]=2)
            //  el lower_bound nos regresa el iterador al primer 2
            auto it = lower_bound(v.begin(), v.end(), v[i]);
            
            //  Calcula el índice (posición 0-indexada)
            int pos = it - v.begin();

            // se calcula el nuevo tamaño index 0
            int nuevotam = n - pos;

            // Si el tamaño del sub-juego o nuevo tamano es impar, gana
            if (nuevotam % 2 == 1) {
                gana = true;
                break; 
            }
        }

        
        if (gana) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
            
    }

    return 0;
}