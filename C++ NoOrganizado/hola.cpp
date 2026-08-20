#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    bool encontrado;
    long long t, a,b ,c, n;
    cin >> t;
    while (t--){
      a=n/2;
        encontrado=false;
        cin >> n;
        a=n/2;
        if(n%2==0){
            int limit=n/2;
        
            for (int i=1;i<limit;i++){
                if (!encontrado){
                   
                c=a^i^n;
                long long sum=a+i+c;
                long long hola=a^i^c;
                long long n2=n*2;
                if((sum)==(n2) && (hola)==n && a!=i && i!=c && a!=c){
                    cout << a <<" "<< i <<" "<< c<<" \n";
                    encontrado=true;
                    break;

                }
            
                }
                else {
                    break;
                }
            
        }
        
        }
        else {
            cout << -1<<"\n";
            continue;
        }
       
        
        if(!encontrado){
          cout<<-1<<" \n";
        }


    }
    return 0;
}
