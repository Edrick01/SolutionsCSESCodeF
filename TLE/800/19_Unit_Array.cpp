#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--){
     int x; cin >> x ;
     int menosuno=0, uno=0, cambios=0;
     for (int i=0; i<x; i++){
        int a; cin >> a;
        if (a==-1) menosuno++;
        else uno++;
     }
     if (menosuno<=uno){
      if (menosuno%2) {menosuno--; uno++; cambios++;}
      if (menosuno%2==0 && menosuno+uno>=0) cout << cambios << "\n";
     }
     else {
      while (menosuno>uno) {cambios++; menosuno--; uno++;}
      if (menosuno%2) {menosuno--; uno++; cambios++;}
      if (menosuno%2==0 && menosuno+uno>=0) cout << cambios << "\n";
    
     }
    }
    return 0;
}