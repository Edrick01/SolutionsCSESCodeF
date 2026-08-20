#include<bits/stdc++.h>
using namespace std;
int main () {

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
   int n, pi, result1=0, result2=0;
    cin >> n;
    for (int i=0; i<n;i++){
        cin >> pi;
        if (pi%2==0){
            result1++;

        }
        else {
            result2++;
        }
    }
    if (result1>result2){
        cout << "Sebastian" << "\n";
    }
    else {
        cout << "Notbastian" << "\n";
    }

}