#include <bits/stdc++.h>
using namespace std;

int t;
string a, b;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> t;
    for (int i=0; i<t; i++){
        cin >> a >> b;
        swap(a[0],b[0]);
        cout <<a<<" "<< b <<"\n";
    }

    return 0;
}