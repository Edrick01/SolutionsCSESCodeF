#include <bits/stdc++.h>

using namespace std;

void hanoi(int n, int origen, int auxiliar, int destino) {
    if (n == 0) return;

    // 1. Mover n-1 discos de origen a auxiliar
    hanoi(n - 1, origen, destino, auxiliar);

    // 2. Mover el disco actual de origen a destino
    cout << origen << " " << destino << "\n";

    // 3. Mover los n-1 discos de auxiliar a destino
    hanoi(n - 1, auxiliar, origen, destino);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    cout << (1 << n) - 1 << "\n";

    hanoi(n, 1, 2, 3);

    return 0;
}