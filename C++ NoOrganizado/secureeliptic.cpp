#include <bits/stdc++.h>
using namespace std;

   long long pot(long long a, long long b, long long c){
    long long res=1;
    a%=c;
    while (b>0){
        if (b%2==1){
            res=(res*a)%c;
        }
    a=(a*a)%c;
    b=b/2;
   }
    return res;
}
    mod(long long n, long long m){
        return (n%m + m) % m;
    }


int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    long long t, a, b ,p, x1, y1, x2,y2,x3, y3;
    long long m, num1, num2, inv;
    cin >>t;
    while (t--){
        cin >> a >> b >> p >> x1 >> y1 >> x2 >> y2;
        x1=mod(x1,p);
        y1=mod(y1,p);
        x2=mod(x2,p);
        y2=mod(y2,p);
        if (x1==x2 && mod(y1+y2,p)==0){
            cout << "POINT_AT_INFINITY\n";
        }
        else if(x1==x2 && y1==y2){
            num1=mod((3*(x1*x1)+a),p);
            num2=mod((2*y1),p);
            inv=pot(num2,p-2,p);
            m=mod(num1*inv,p);
            x3=mod((m*m)-2*x1, p);
            y3=mod(m*(x1-x3)-y1, p);
            cout << x3 <<" "<<y3<<"\n";
        }
        else {
            
            num1=mod(y2-y1, p);
            num2=mod(x2-x1, p);
            inv=pot(num2,p-2,p);
            m=mod(num1*inv, p);

            x3=mod((m*m)-x1-x2,p);
            y3=mod(m*(x1-x3)-y1,p);

            cout << x3 <<" "<<y3 <<"\n";
        }
        
        


    }

 return 0;
}