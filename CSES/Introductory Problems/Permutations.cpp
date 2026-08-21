#include <bits/stdc++.h>

using namespace std;

int main () 
{
  ios::sync_with_stdio(0); cin.tie(0);
  long long n, cont=0; cin >> n;
  vector<long long> a(n);
  //NO SOLUTION
  for (int i=2; i<=n; i+=2){
    a[cont]=i;
    cont++;
  }
  for (int i=1; i<=n; i+=2){
    a[cont]=i;
    cont++;
  }

  if (n==2 || n==3){
    cout << "NO SOLUTION\n";
    return 0;
  }
  
  for (int i=0; i<n; i++){
    cout << a[i] << " ";
  }

  return 0;
}