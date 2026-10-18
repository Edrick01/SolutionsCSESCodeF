#include <bits/stdc++.h>

using namespace std;

int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--)
  {
    int cont=0;
    for (int i=1; i<=10; i++){
      for (int j=1; j<=10; j++){
        char a; cin >> a;
        if (a=='X'){
          if (i==1 || i==10 || j==1 || j==10) cont+=1;
          else if (i==2 || i==9 || j==2 || j==9) cont+=2;
          else if (i==3 || i==8 || j==3 || j==8) cont+=3;
          else if (i==4 || i==7 || j==4 || j==7) cont+=4;
          else cont+=5;
        }

      }
    
    }
    cout << cont<<'\n';
  }
  

  return 0;
}