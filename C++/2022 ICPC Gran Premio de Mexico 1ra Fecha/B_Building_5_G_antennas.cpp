#include <bits/stdc++.h>
using namespace std;

void solve () {
  int n, k; cin >> n >> k;
  vector<vector<int>> cityboys(n+1);

  for (int i=0; i<n-1; i++){
    int nodo, conexion; cin >> nodo >> conexion;
    cityboys[nodo].push_back(conexion);
    cityboys[conexion].push_back(nodo);
  }

  vector<int> distancia(n+1, -1);
  priority_queue<int, vector<int>, greater<int>> citycercana;
  citycercana.push(1);

  vector<int> respuesta;
  
  while (!citycercana.empty()){
    int city=citycercana.top();
    citycercana.pop();

    respuesta.push_back(city);

    distancia[city]=0;

    queue<int> bfs;
    bfs.push(city);

    while (!bfs.empty()){
      int conexion=bfs.front();
      bfs.pop();

      if (distancia[conexion]== k) continue;

      for (int vecino: cityboys[conexion]){

        if (distancia[vecino]==-1){
          citycercana.push(vecino);
        }

        if (distancia[vecino]==-1 || distancia[vecino]>distancia[conexion]+1){
          distancia[vecino]=distancia[conexion]+1;
          bfs.push(vecino);
        }
      }
    }
  }

  for (int i=0; i<respuesta.size(); i++){
    cout << respuesta[i] << " ";
  }
  cout << "\n";

}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  //int t; cin >> t;
  //while (t--) 
  solve();
  return 0;
}