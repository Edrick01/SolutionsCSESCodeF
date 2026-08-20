#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t, cont=0,num, maximo=0;
    cin >> t;
    int n;
    
    
    for (int i=0;i<t;i++){
        cont=0;
        maximo=0;
        cin >> num;
        for (int j=0;j<num;j++){
            cin >> n;
        
        if (n==0){
            cont++;
        }
        else if (n!=0 && j>0){
            maximo=max(maximo,cont);
            cont=0;
        }
    }
    maximo=max(maximo,cont);
        cout << maximo << "\n";

    }
  
    

    return 0;
}