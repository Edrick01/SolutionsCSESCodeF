#include<bits/stdc++.h>
using namespace std;
int main() {
 ios_base::sync_with_stdio(0);
 cin.tie(0); cout.tie(0);
 long long t, n,k, conth, conts, res=0;
 bool camb=true;
 cin >> t;
 while (t--){
    camb=true;
    res=0;
    conth=0;
    conts=0;
    cin>> n >> k;
    vector<char>s(n);
    vector<int>m(n,0);
    for (int i=0; i<n;i++){
        cin >> s[i];
        if(s[i]=='H'){
            m[i]=1;
            conth+=1;
        }
        else {
            conts+=1;
        }

    }

    if(conth==n){
        cout << 0<<"\n";
        continue;
    }
   
    else {
        for (int i=0;i<n;i++){
            if ((m[i]==0 || m[i]%2==0) && k+i<=n){
                res+=1;
                
                for (int j=i; j<k+i;j++){
                    
                    m[j]+=1;
                    
                }    
            
            }
            
        }

    }

    for (int i=0; i<n ; i++){
        
        if(m[i]%2!=0 && m[i]!=0){

        }
        else {
            camb=false;
            break;
        }
    }
   
    if (camb){
        cout << res<<"\n";
    }
    else{
        cout << -1 << "\n";
    }

 }

    return 0;
}