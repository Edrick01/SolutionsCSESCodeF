#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    string paren;
    int numstr;
    stack<char>pila;
    bool v=true;
    cin >> paren;
    numstr=paren.size();
    for (int i=0;i<numstr;i++){
        if (paren[i]=='('){
            pila.push(1);
        }
        else if (paren [i]==')'){
            if (pila.empty()){
                v=false;
                break;
            }
            else {
                pila.pop();
            }
            
        }
    }
    if (pila.empty() && v){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    

    return 0;
}