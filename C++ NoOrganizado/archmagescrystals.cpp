#include<bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n, a;
    long long cont=0;
    
    cin >> n;
    int aux=n;
    for (int i=0;i<n;i++){
        cin >> a;
        cont+=a;
        
        
    }
    for (int i=0;i<n;i++){
        if (cont%aux==0){
            cout << i << "\n";
            break;
        }
        else{
            aux--;
            
        }
    }
    return 0;
}