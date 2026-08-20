#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

   
    long long xs, ys, xt, yt, xp, yp;
    cin >> xs >> ys >> xt >> yt >> xp >> yp;

    
    long long min_x, max_x, min_y, max_y;

    if (xs < xt) {
        min_x = xs;
        max_x = xt;
    } else {
        min_x = xt;
        max_x = xs;
    }

    if (ys < yt) {
        min_y = ys;
        max_y = yt;
    } else {
        min_y = yt;
        max_y = ys;
    }

   
    if (xp > min_x && xp < max_x && yp > min_y && yp < max_y) {
       
        cout << 2 << "\n";

        

       
        if (ys > yp) {
            cout << xs << " " << 1000000000 << "\n";
            cout << xt << " " << 1000000000 << "\n";
        } else {
            cout << xs << " " << -1000000000 << "\n";
            cout << xt << " " << -1000000000 << "\n";
        }

        
    

    } else {
       
        cout << 0 << "\n";
    }

    return 0;
}