#include <bits/stdc++.h>
using namespace std;

int evaluarfuncion(int x, int a, int b, int c, int d) {
  return a * (x * x * x) + b * (x * x) + c * x + d;
}

int main() {
  int x, a, b, c, d;
  cin >> x >> a >> b >> c >> d;
  cout << evaluarfuncion(x, a, b, c, d) << "\n";
  return 0;
}
