//#include <bits\stdc++.h>

//using namespace std;

//int main () {
   // ios::sync_with_stdio(0);
   // cin.tie(0); cout.tie(0);
   // int t, n, cntr, contb, contw;
   // bool p;
    //cin >> t;
   // char c;
   // while (t--) {
       // cntr=0;
       // contb=0;
       // contw=0;
       // p=false;
       // cin >> n;
       // for (int i=0; i<n; i++){
           // cin >> c;
           // if (c=='R') cntr++;
           // else if (c=='B') contb++;
           // else if (c=='W') {
             //   contw++;
                //cout << cntr << " " << contb << "\n";
          //  if ((cntr>0 || contb>0) && (cntr==0 || contb==0) && !p && i!=0){
         //       p=true;
                //cout << "sss\n";
        //    }
         //   cntr=0;
         //   contb=0;
       //     }

      // }
    //    if (n==1 && !p) {
      //      p=true;
    //    }
    //    if (n==2 && (cntr==1 || contb==1) && !p){
   //         p=true;
     //   }
   //     if (!p || n==contw) cout << "YES\n";
    //    else cout << "NO\n";
   // }
//return 0;
//}


/*#include <bits/stdc++.h>
using namespace std;
 
int main () {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t, n, cr=0, cb=0, cw=0;
  char c;
  cin >> t;
  bool pos;
  int aux1;
  int aux2;
  while (t--) {
    cr=0;
    cb=0;
    cw=0;
    aux1=0;
    aux2=0;
    pos=false;
      cin >> n;
      for (int i=0; i<n; i++) {
        cin >> c;
        if (c=='R'){
            cr++;
        }
        else if (c=='B'){
          cb++;
        }
        else {
          cw++;
          if (cr>0||cb>0){
            if(!(cr>0 && cb>0)){
                pos=true;
            }
          }
          cr=0;
          cb=0;
        }
        if (i==n-2){
            aux1=c;
        }
        else if(i==n-1){
          aux2=c;
        }
      }
      if (n==1 && c!='W'){
        pos=true; 
      }
      else if (cw==n){
      pos=false;
    }
    else if (aux1=='W' && (aux2=='B' || aux2=='R')){
      pos=true;
    }
    if(!pos) cout << "YES\n";
    else cout << "NO\n";
 
  }
 
  return 0;
}*/
#include <bits/stdc++.h>
using namespace std;

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  
  int t;
  cin >> t;
  
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int cr = 0;
    int cb = 0;
    bool posible = true; // Asumimos que sí se puede hasta que demostremos lo contrario
    
    for (int i = 0; i < n; i++) {
      if (s[i] == 'W') {
        // ACABO DE TERMINAR UN BLOQUE DE COLORES
        // Si el bloque tenía algo de color (no estaba vacío)
        if (cr > 0 || cb > 0) {
          // Si tenía colores, TIENE que tener ambos (R y B)
          if (cr == 0 || cb == 0) {
            posible = false;
          }
        }
        // Reiniciamos contadores para el siguiente bloque
        cr = 0;
        cb = 0;
      } else {
        // SI ES COLOR, SOLO CONTAMOS
        if (s[i] == 'R') cr++;
        else cb++;
      }
    }

    // --- ESTA FUE LA PARTE QUE TE FALTABA ---
    // Revisar el último segmento después de que el bucle termina
    // (Por si el string no terminaba en 'W', ej: "WWRB")
    if (cr > 0 || cb > 0) {
      if (cr == 0 || cb == 0) {
        posible = false;
      }
    }
    // ----------------------------------------

    if (posible) cout << "YES\n";
    else cout << "NO\n";
  }

  return 0;
}