#include <bits/stdc++.h>
using namespace std;
  
int main (){
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--)
  {
    int n, contp=0, conti=0; cin >> n;
    for (int i=0; i<n; i++){
      int x; cin>>x;
      if(x%2)conti++;
      else contp++;
    }
    if(conti==0){
      cout << "YES\n";
    }
    else if(contp==0){
      if (conti%2) cout << "NO\n";
      else cout << "YES\n";
    }
    else{
      if (conti%2){
        cout << "NO\n";
      }
      else {
        cout << "YES\n";
      }
    }
    
  }
    

  return 0;
}