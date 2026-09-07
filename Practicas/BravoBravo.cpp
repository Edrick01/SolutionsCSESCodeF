#include <bits/stdc++.h>

using namespace std;

int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  int cont=0;
  vector <char> a;
  while (cont<=4){
    char c; //cin >> c;
    c=getchar();
    if (cont==4) a.push_back(c);
    cout << c;
    if (c=='\n') {
      if (cont==0 || cont ==1) cout << "Bravo, bravo!\n";
      cont++;
    }
  }
  for (int i=0; i<a.size(); ++i){
    cout << a[i];
  }

  return 0;
}