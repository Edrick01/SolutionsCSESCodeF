#include <bits/stdc++.h>

using namespace std;

void solve () {
  int n;
  cin >> n;
  vector <int> a (n);
  for (int &x : a) cin >> x;
  sort (a.begin(), a.end());
  vector <int> asimple;
  vector <int> aux(n+2,-1) ;
  queue <int> c;

  //a.erase(unique(a.begin(), a.end()), a.end());

  /*for (int x : a) {
    if (x <= n) { // Solo nos importan si están dentro del rango del tablero
        aux[x] = 1;
        c.push(x);
    }
  }*/
  if (n > 0) {
      // Siempre metemos el primero
      asimple.push_back(a[0]);
      aux[a[0]] = 1;
      c.push(a[0]);
      // Recorremos el resto. Si el numero actual a[i] es diferente 
      // al ultimo que metimos en asimple, lo guardamos.
      for (int i = 1; i < n; i++) {
          if (a[i] != a[i-1]) {
              asimple.push_back(a[i]);
              aux[a[i]] = 1;
              c.push(a[i]);
          }
      }
  }
  int cont = asimple.size();
  //for (int i=0; i<cont;i++) cout << asimple[i]<<" ";

    /*for (int i=0; i<n; i++) {
    if (aux.count(i)){

    }
    else {
      aux[i]=-1;
    }
  }
  for (int i=0; i<n; i++){
    cout << aux[i]<<" ";
  }
  cout << "\n";*/




  while (!(c.empty())){
      int u;
      u = c.front();
      c.pop();
      //cout << u << " \n";
      for (int x=0; x<cont; x++){
        long long numb = 1LL*u*asimple[x];
        //cout << numb<<" ";
        if (asimple[x]==1) continue;

        if (numb>n){
          //cout << "no entra\n";
          break;
        }
        if (aux[numb]==-1){
          //cout << "nuevo numero -> "<< numb <<" "<<aux[numb]<< " ";
          aux[numb]=aux[u]+1;
          //cout << aux[numb]<<" ";
          c.push(numb);
        }

      }
      
  }

  for (int i=0; i<n; i++){
    cout << aux[i+1]<<" ";
  }
  cout << "\n";
}


int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--)
  solve();
  
  return 0;
}