#include <bits/stdc++.h>
using namespace std;

long long pot3 (int n) {
  if (n<0) return 0;
  long long res =1;
  for (int i=0; i<n; i++) res*=3;
  return res;
}

void solve () {
  long long n, mind=0,k; cin >> n >> k;
  long long res=0, aux=n;
  int potencia=0, maxpot=0;
  vector<long long> pots(40,0);

  if (k>=n) {
    cout << n*3 << "\n";
    return;
  }
  
  while (aux>0){
    pots[potencia] = aux%3;
    mind+=pots[potencia];
    if (pots[potencia]>0){
      maxpot = potencia;
    }
    aux/=3;
    potencia++;
    if (mind>k) {
      cout <<-1<<"\n";
      return;
    }
  }

  long long nofperm = (k-mind)/2;
  for (int i=maxpot; i>=1; --i) {
    if (nofperm==0) break;
      long long paq= min(pots[i], nofperm);
      pots[i]-=paq;
      pots[i-1]+=paq*3LL;
      nofperm-=paq;
    
  }

  for (int i=0; i<=maxpot;++i){
    if (pots[i]>0) res+=pots[i]*(pot3(i+1)+i*pot3(i-1));
  }

  cout << res << "\n";
}

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) 
  solve();
  return 0;
}