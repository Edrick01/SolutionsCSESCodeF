#include <bits/stdc++.h>

using namespace std;

int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  int number;
  string n; cin>>number;
  number++;
  n=to_string(number);
  vector <bool> distincn (11,false);
  int i=0;
  while (i<=3){
    //cout << n[i]-'0' << " numero" << "estado bool ";
    if (distincn[n[i]-'0']!=true){
      //cout << i << " i actual "<< n[i]-'0' << " numero ya esta \n";
      distincn[n[i]-'0']=true;
      i++;
    }
    else {
      //cout << "a\n";
      number++;
      n=to_string(number);
      i=0;
      for (int j=0; j<distincn.size(); j++){
        distincn[j]=false;
      }
    }
  }
  cout << n << "\n";

  return 0;
}