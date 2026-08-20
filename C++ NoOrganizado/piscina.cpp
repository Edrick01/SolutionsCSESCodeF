#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 int xs, ys, xt, yt, xp, yp, p1, p2, p3, p4, p5, p6 ;
    cin >> xs >> ys >> xt >> yt >> xp >> yp;
        if ((xs==xt && ys==yt)||(xs <= xp && xp <= xt && ys==yt) || (xt <= xp && xp <= xs && ys==yt)) {
            cout << 0 << "\n";

        }
        else if ((xs <= xp && xp <= xt) || (xt <= xp && xp <= xs)){
            cout << 1 << "\n";
            cout << xs << " " << yt << "\n";
        }
        else if(ys>=yp){
            if (xs<xt){
                p1=xs;
                p2=1e9;
                p3=1e9;
                p4=1e9;
                p5=1e9;
                p6=yt;

            }
             cout << 3<< "\n";
        cout << p1 << " " << p2 << "\n";
        cout << p3 << " " << p4 << "\n";
        cout << p5 << " " << p6 << "\n";
        }
        else if (ys<yp){
            if (xs<xt){
                p1=xs;
                p2=-1e9;
                p3=1e9;
                p4=-1e9;
                p5=1e9;
                p6=yt;

            }
             cout << 3<< "\n";
        cout << p1 << " " << p2 << "\n";
        cout << p3 << " " << p4 << "\n";
        cout << p5 << " " << p6 << "\n";

        }
     
    return 0;
}