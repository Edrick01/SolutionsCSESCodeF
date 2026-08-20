#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    string s;
    string final="";
    int n, uno=0;

    cin >> s;
    n=s.size();
    for(int i=0;i<n-1;i++){
       if (s[i]=='1' && !s.empty() && final.back()==0 ){
        final.pop_back();
       }
       else {
        final.push_back();
       }
    }
    cout << final.size<<"\n"<< final;

    return 0;
}