#include <bits/stdc++.h>

using namespace std;

int main () {
  ios::sync_with_stdio(0); cin.tie(0);
  //int n; cin>>n;
  vector<int> a(27,0);
  
  vector<char> letters(27);
  for (char j='A'; j<='Z'; j++){
    letters[j-'A']=j;
  }
  string s; cin >>s;
  int n=s.size();
  vector<char> ans(n);
  for (int i=0; i<s.size(); i++){
    
    a[s[i]-'A']++;
    //cout << "INGRESADO "<< c;
  }

  int odd=0;
  int oddchar, noddchar, cont=0;
  for (int i=0; i<26; i++){
    if (a[i]%2==1) {
      //cout << "ODD "<<letters[i]<<" "<<a[i]<<"\n";
      odd++;
      oddchar=i;
      noddchar=a[i];
    }
  }
  if (odd>1) {
      cout<<"NO SOLUTION\n";
      
  }
  else {
    for (int i=0; i<26; i++){
      if (a[i]%2==0){
        for (int j=0; j<a[i]/2; j++){
          ans[cont]=letters[i];
          ans[n-1-cont]=letters[i];
          //cout << "INGRESADO en la posicion "<< cont <<" y "<< n-1-cont <<" de "<< letters[i]<<"\n";
          cont++;
        }
      }
    }
    for (int i=0; i<n; i++){
      if (ans[i]=='\0'){
        for (int j=0; j<noddchar; j++){
          ans[i+j]=letters[oddchar];
        }
        break;
      }
    }
    for (char c: ans){
      cout<<c;
    }

  }
  return 0;
}