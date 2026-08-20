#include <bits/stdc++.h>
using namespace std;
int t;
char c;
int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    string s="codeforces";
    cin >> t;
    for (int i = 0; i < t; i++) 
    {
        cin >> c;
        for (int j=0;j<10;j++){
            if(c==s[j]){
                cout <<"YES \n";
                break;

            }
            else {
                if(j==9){
                    cout <<"NO \n";
                }
            }
        }
        
    }

    return 0;
}