#include <bits/stdc++.h> 
using namespace std;

void inttosbin (int n, string &binario) {
  while (n > 0) {
    binario += char('0' + n % 2);
    n /= 2;
  }
  reverse(binario.begin(), binario.end());
}

int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  string binario="";
  for (int i=0; i<(1<<n); i++){
    inttosbin(i^(i>>1), binario); //cout << (i^(i>>1)) << " ";
    if (binario.size() < n) {
      for (int j=0; j<n-binario.size(); j++){
        cout << "0";
      }
    }
    cout << binario;
    cout << "\n";
    binario.clear();
  }
  
  return 0;
}