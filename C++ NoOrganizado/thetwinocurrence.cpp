#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    long long n, q, cons;
    cin >> n>>q;
    vector<long long>mat(n,0);
    
    for (int i=0; i<n;i++){
        cin >> mat[i];
    }

    while(q--){
        
        cin>>cons;
        auto it=lower_bound(mat.begin(),mat.end(), cons);
        if(it!=mat.end() && *it == cons){
            cout << (it-mat.begin())+1 <<" ";
        }
        else {
            cout << -1 << " "<<-1;
            continue;
        }

        auto it2=upper_bound(mat.begin(),mat.end(), cons);
        if(it2!=mat.end()){
            cout << it2-mat.begin() <<" \n";
        }
        else {
            cout << n;
            continue;
        }
    }




    return 0;
}