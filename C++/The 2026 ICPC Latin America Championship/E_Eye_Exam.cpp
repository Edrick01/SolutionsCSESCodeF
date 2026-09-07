#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n; cin >> n;
  bool possible = true;
  vector <pair<long long, long long>> minymax;
  while (n--){
    long long a, b; cin >> a >> b;
    char q; cin >> q;
    long long mid = (a + b)/2;
    long long mini, maxi;
    switch (q) {
      case 'A':
        mini=a;
        if ((a + b)%2) maxi=mid;
        else maxi=mid-1;
        break;
      case 'B':
        maxi=b;
        if ((a + b)%2) mini=mid+1;
        else mini=mid+1;
        break;
      case 'E':
        if ((a + b)%2) possible = false;
        else {mini = maxi = mid;}
        break;

    }
    minymax.push_back({mini, maxi});
  }
  if (possible){
    long long minires, maxires;
    minires=minymax[0].first;
    maxires=minymax[0].second;
    for (auto p : minymax){
      //cout << minires << "resact " << p.first << " "<< p.second << "\n";
      if (minires>p.second){
        cout<<"*\n"; return 0;
      }
      else {
        minires = max(minires,p.first);
        maxires = min (maxires,p.second);
      }
    }
    if (minires>maxires) {cout<<"*\n"; return 0;}
    cout << minires << " " << maxires << "\n";
  }
  else cout << "*\n";
  return 0;
}
