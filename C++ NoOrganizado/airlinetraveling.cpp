#include <iostream>
#include <vector>

int main() {
    // Definir el número de nodos (vértices)
    int n = 5; 

    // Crear la lista de adyacencia: un vector de vectores
    // adj[i] contendrá todos los vecinos del nodo i
    std::vector<std::vector<int>> adj(n);

    // Agregar aristas para un grafo no dirigido
    // Agregamos la arista 0-1
    adj[0].push_back(1);
    adj[1].push_back(0);

    // Agregamos la arista 1-2
    adj[1].push_back(2);
    adj[2].push_back(1);

    // Agregamos la arista 0-4
    adj[0].push_back(4);
    adj[4].push_back(0);

    // Imprimir la lista de adyacencia
    std::cout << "Lista de Adyacencia:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Nodo " << i << ":";
        for (int neighbor : adj[i]) {
            std::cout << " -> " << neighbor;
        }
        std::cout << std::endl;
    }

    return 0;
}