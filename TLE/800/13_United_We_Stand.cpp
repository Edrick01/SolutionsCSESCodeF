#include <bits/stdc++.h>
using namespace std;
  
int main (){
  int t; cin >> t;
  while (t--)
  {
    int n; cin >> n;
    vector<long long> c;
    vector<long long> a;
    vector <long long> b;
    for (int i=0; i<n; i++){
      long long x; cin >> x;
      c.push_back(x);
    }
    sort(c.begin(),c.end());
    a.push_back(c[0]);
    //cout << a.size() << c.size()<< '\n';
    for (int i=1; i<n; i++){
      int l=a.size();
      if (a[l-1]%c[i]==0) {a.push_back(c[i]); continue;} 
      b.push_back(c[i]);  
    }
    
    if (b.size()>0 && a.size()>0){
      cout << a.size() << " " << b.size() << '\n';
      for(int i=0; i<a.size();i++){
        cout << a[i] << " ";
      }
      cout << "\n";
      for(int i=0; i<b.size();i++){
        cout << b[i] << " ";
      } 
      cout << "\n";

    }
    else cout << -1 << '\n';
  }
    

  return 0;
}