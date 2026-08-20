#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m, k, x, y, result=0;
    cin >> n >> m>>k ;
    vector<vector<char>>matriz(n,vector<char>(m,0)); // matriz de los puntos y gatos
     vector<vector<int>>dist(n,vector<int>(m,-1)); // matriz de distancias empieza en -1, si es -1 no se ha visitado
     // si se visita se actualiza la distancia que tienen desde los puntos especiales
   
    queue<pair<int,int>> v; // cola de pares, este guarda los puntos especiales
    // y luego los puntos vecinos donde se puede ir
    for (int i=0; i<n; i++){
        for (int j=0;j<m;j++){
            cin >> matriz[i][j];
        }
    }
    for (int i=0; i<k;i++){
        cin >> x >> y;
        dist[x-1][y-1]=0;
        v.push({x-1,y-1}); // se insertan los puntos especiales en la cola
    }
    int df[4]={-1,1,0,0}; // arreglos para moverse en las 4 direcciones de la fila
    int dc[4]={0,0,-1,1}; // arreglos para moverse en las 4 direcciones de la columna
    while (!v.empty())// mientras la cola no este vacia
    {
    pair<int,int> actual=v.front(); // se crea un par para que guarde el primer elemento de la cola
        v.pop(); // se elimina el primer elemento de la cola
        cout << actual.first << " " << actual.second <<" \n";
        int f=actual.first;// se obtienen las coordenadas del punto actual
        int c=actual.second;// se obtienen las coordenadas del punto actual
        for (int i=0;i<4;i++){// se recorren las 4 direcciones
            int nf=f+df[i];// nueva fila
            int nc=c+dc[i];// nueva columna
            if (nf>=0 && nf<n && nc>=0 && nc<m && matriz[nf][nc]=='.' && dist[nf][nc]==-1)// saber si esta dentro de los limites de la matriz
            // si no se ha visirado y si es un punto valido (.)
            {
                dist[nf][nc]=dist[f][c]+1; // se actualiza la distancia del punto vecino, que es la distancia del punto actual +1
                // en el primer caso ser 0 (punto especial) +1 =1
                v.push({nf,nc}); // se agrega el punto vecino a la cola
            }
        }
        
}
for (int i=0; i<n;i++){
        for (int j=0;j<m;j++){
            if (dist[i][j]!=-1)// se suma la distancia si se visito el punto
            {
                result+=dist[i][j];

            }
            
        }
    }
    cout << result << "\n";
    
    return 0;
}