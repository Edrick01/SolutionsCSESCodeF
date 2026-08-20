#include <bits/stdc++.h>
using namespace std;


int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    long long t, n, comp1, comp2, comp3, final,si;
    double hola;
    string aux;

    cin >> t;

    while (t--)
    {
        cin >> n;

        
        comp1=n/2;
        comp2=n;
        comp3=(n*2)-comp1-comp2;

       
        cout<< comp1<<" "<<comp2<<" "<<comp3<<" "<<comp3+comp2+comp1<<" \n";
        final=comp1^comp2;
        final=final^comp3;
        cout << final <<"\n";
    }
    
    return 0;
}