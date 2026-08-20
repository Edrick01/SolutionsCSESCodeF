#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio (0);
    cin.tie(0);cout.tie(0);
    int t, n, a1 , b;
     n=3;
    
    cin >> t;
    long long menorest;
    int rest;
   
    int menor=0;
    bool orde;
    while (t--){
            cin >> n;
            vector <int> a(n);
        menorest=10e9;
        rest=0;
        menor=0;
        orde=true;
        for (int i=0; i<n;i++){
            cin >> a[i];
            if (menor<=a[i])
            {
                menor=a[i];

            }
            else {
                orde=false;
            }

            if (orde && i!=0){
                if (menorest>(a[i]-rest)){
                menorest=a[i]-rest;
                a1=rest;
                rest=a[i];
                b=a[i];

            }
            else {
                rest=a[i];
            }
            }
            else {
                rest=a[i];
            }

            }
            if (orde){
                int cont=0;
                while (a1<=b){
                    a1+=1;
                    b-=1;
                    cont++;

                }
                cout << cont<<"\n";
            }
            else {
                cout << 0<<"\n";
            }
            

            
        }

       
    
    
    return 0;
}